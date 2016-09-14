/*
	Copyright (c) 2016 Y56380X

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in all
	copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
	SOFTWARE.
*/

#include "RF24wrapper.hpp"

RF24* Create(uint8_t ce, uint8_t csn, uint32_t spi_speed)
{
	return new RF24(ce, csn, spi_speed);
}

void Delete(RF24* rf24)
{
	delete rf24;
}

void Begin(RF24* rf24)
{
	rf24->begin();
}

void SetAutoAck(RF24* rf24, bool autoAck)
{
	rf24->setAutoAck(autoAck);
}

void PrintDetails(RF24* rf24)
{
	rf24->printDetails();
}

void StartListening(RF24* rf24)
{
	rf24->startListening();
}

void StopListening(RF24* rf24)
{
	rf24->stopListening();
}

void SetChannel(RF24* rf24, uint8_t channel)
{
	return rf24->setChannel(channel);
}

uint8_t GetChannel(RF24* rf24)
{
	return rf24->getChannel();
}

bool TestCarrier(RF24* rf24)
{
	return rf24->testCarrier();
}

bool SetDataRate(RF24* rf24, uint8_t dataRate)
{
	return rf24->setDataRate((rf24_datarate_e)dataRate);
}

uint8_t GetDataRate(RF24* rf24)
{
	return (uint8_t)rf24->getDataRate();
}

void SetPALevel(RF24* rf24, uint8_t paLevel)
{
	rf24->setPALevel(paLevel);
}

uint8_t GetPALevel(RF24* rf24)
{
	return rf24->getPALevel();
}

bool Available(RF24* rf24, uint8_t* pipe_num)
{
	if (pipe_num == nullptr)
		return rf24->available();
	else
		return rf24->available(pipe_num);
}

void OpenWritingPipe(RF24* rf24, const uint8_t* address)
{
	rf24->openWritingPipe(address);
}

void OpenReadingPipe(RF24* rf24, uint8_t number, const uint8_t* address)
{
	rf24->openReadingPipe(number, address);
}

void CloseReadingPipe(RF24* rf24, uint8_t pipe)
{
	rf24->closeReadingPipe(pipe);
}

void EnableDynamicPayloads(RF24* rf24)
{
	rf24->enableDynamicPayloads();
}

uint8_t GetDynamicPayloadSize(RF24* rf24)
{
	return rf24->getDynamicPayloadSize();
}

void SetRetries(RF24* rf24, uint8_t delay, uint8_t count)
{
	rf24->setRetries(delay, count);
}

void SetCRCLength(RF24* rf24, uint8_t length)
{
	rf24->setCRCLength((rf24_crclength_e)length);
}

uint8_t GetCRCLength(RF24* rf24)
{
	return (rf24_crclength_e)rf24->getCRCLength();
}

void Read(RF24* rf24, void* buffer, uint8_t length)
{
	rf24->read(buffer, length);
}

bool Write(RF24* rf24, const void* buffer, uint8_t length)
{
	return rf24->write(buffer, length);
}

void PowerDown(RF24* rf24)
{
	rf24->powerDown();
}

void PowerUp(RF24* rf24)
{
	rf24->powerUp();
}
