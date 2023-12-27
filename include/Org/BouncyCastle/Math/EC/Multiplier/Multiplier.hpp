#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Org\BouncyCastle\Math\EC\Multiplier\AbstractECMultiplier.hpp"
#include "Org\BouncyCastle\Math\EC\Multiplier\DoubleAddMultiplier.hpp"
#include "Org\BouncyCastle\Math\EC\Multiplier\ECMultiplier.hpp"
#include "Org\BouncyCastle\Math\EC\Multiplier\FixedPointCombMultiplier.hpp"
#include "Org\BouncyCastle\Math\EC\Multiplier\FixedPointPreCompInfo.hpp"
#include "Org\BouncyCastle\Math\EC\Multiplier\FixedPointUtilities.hpp"
#include "Org\BouncyCastle\Math\EC\Multiplier\GlvMultiplier.hpp"
#include "Org\BouncyCastle\Math\EC\Multiplier\IPreCompCallback.hpp"
#include "Org\BouncyCastle\Math\EC\Multiplier\MixedNafR2LMultiplier.hpp"
#include "Org\BouncyCastle\Math\EC\Multiplier\MontgomeryLadderMultiplier.hpp"
#include "Org\BouncyCastle\Math\EC\Multiplier\NafL2RMultiplier.hpp"
#include "Org\BouncyCastle\Math\EC\Multiplier\NafR2LMultiplier.hpp"
#include "Org\BouncyCastle\Math\EC\Multiplier\PreCompInfo.hpp"
#include "Org\BouncyCastle\Math\EC\Multiplier\ReferenceMultiplier.hpp"
#include "Org\BouncyCastle\Math\EC\Multiplier\ValidityPreCompInfo.hpp"
#include "Org\BouncyCastle\Math\EC\Multiplier\WNafL2RMultiplier.hpp"
#include "Org\BouncyCastle\Math\EC\Multiplier\WNafPreCompInfo.hpp"
#include "Org\BouncyCastle\Math\EC\Multiplier\WNafUtilities.hpp"
#include "Org\BouncyCastle\Math\EC\Multiplier\WTauNafMultiplier.hpp"
#include "Org\BouncyCastle\Math\EC\Multiplier\WTauNafPreCompInfo.hpp"
#include "Org\BouncyCastle\Math\EC\Multiplier\ZSignedDigitL2RMultiplier.hpp"
#include "Org\BouncyCastle\Math\EC\Multiplier\ZSignedDigitR2LMultiplier.hpp"
#ifdef __cpp_modules
export module Multiplier;
#endif
