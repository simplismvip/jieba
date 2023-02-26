//
//  Segmentor.h
//  iosjieba
//
//  Created by yanyiwu on 14/12/24.
//  Copyright (c) 2014年 yanyiwu. All rights reserved.
//

#ifndef __iosjieba__Segmentor__
#define __iosjieba__Segmentor__

#include <stdio.h>

#include "MixSegment.hpp"
#include <string>
#include <vector>
#include <jieba/KeywordExtractor.hpp>

extern CppJieba::MixSegment * globalSegmentor;

void JiebaInit(const std::string& dictPath, const std::string& hmmPath, const std::string& userDictPath);

void JiebaCut(const std::string& sentence, std::vector<std::string>& words);

extern CppJieba::KeywordExtractor *keyword;
void JiebaInitExtract(const std::string& dictPath, const std::string& hmmPath, const std::string& idfPath, const std::string& stopPath);

void JiebaExtract(const std::string& target, std::vector<std::string>& words, size_t sotpL);
#endif /* defined(__iosjieba__Segmentor__) */
