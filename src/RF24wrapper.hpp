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

#include <cstdlib>
#include <RF24/RF24.h>

#define DLL_PUBLIC __attribute__ ((visibility ("default")))

extern "C"
{
	DLL_PUBLIC RF24* Create(uint8_t ce, uint8_t csn, uint32_t spi_speed);
	DLL_PUBLIC void Delete(RF24* rf24);
	DLL_PUBLIC void Begin(RF24* rf24);
	DLL_PUBLIC void SetAutoAck(RF24* rf24, bool autoAck);
	DLL_PUBLIC void PrintDetails(RF24* rf24);
	DLL_PUBLIC void StartListening(RF24* rf24);
	DLL_PUBLIC void StopListening(RF24* rf24);
	DLL_PUBLIC void SetChannel(RF24* rf24, uint8_t channel);
	DLL_PUBLIC uint8_t GetChannel(RF24* rf24);
	DLL_PUBLIC bool TestCarrier(RF24* rf24);
	DLL_PUBLIC bool SetDataRate(RF24* rf24, uint8_t dataRate);
	DLL_PUBLIC uint8_t GetDataRate(RF24* rf24);
	DLL_PUBLIC void SetPALevel(RF24* rf24, uint8_t paLevel);
	DLL_PUBLIC uint8_t GetPALevel(RF24* rf24);
	DLL_PUBLIC bool Available(RF24* rf24, uint8_t* pipe_num);
	DLL_PUBLIC void OpenWritingPipe(RF24* rf24, const uint8_t* address);
	DLL_PUBLIC void OpenReadingPipe(RF24* rf24, uint8_t number, const uint8_t* address);
	DLL_PUBLIC void CloseReadingPipe(RF24* rf24, uint8_t pipe);
	DLL_PUBLIC void EnableDynamicPayloads(RF24* rf24);
	DLL_PUBLIC uint8_t GetDynamicPayloadSize(RF24* rf24);
	DLL_PUBLIC void SetRetries(RF24* rf24, uint8_t delay, uint8_t count);
	DLL_PUBLIC void SetCRCLength(RF24* rf24, uint8_t length);
	DLL_PUBLIC uint8_t GetCRCLength(RF24* rf24);
	DLL_PUBLIC void Read(RF24* rf24, void* buffer, uint8_t length);
	DLL_PUBLIC bool Write(RF24* rf24, const void* buffer, uint8_t length);
	DLL_PUBLIC void PowerDown(RF24* rf24);
	DLL_PUBLIC void PowerUp(RF24* rf24);
}
