#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Experimental/Easing.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Easing)
// Forward declare root types
namespace UnityEngine::UIElements::Experimental {
class Easing;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Experimental::Easing);
// Dependencies System.Object
namespace UnityEngine::UIElements::Experimental {
// Is value type: false
// CS Name: UnityEngine.UIElements.Experimental.Easing
class CORDL_TYPE Easing : public ::System::Object {
public:
// Declarations
/// @brief Method InBack, addr 0x6b53798, size 0x24, virtual false, abstract: false, final false
static inline float_t InBack(float_t  t) ;

/// @brief Method InBounce, addr 0x6b5346c, size 0x24, virtual false, abstract: false, final false
static inline float_t InBounce(float_t  t) ;

/// @brief Method InCirc, addr 0x6b53868, size 0x20, virtual false, abstract: false, final false
static inline float_t InCirc(float_t  t) ;

/// @brief Method InCubic, addr 0x6b53358, size 0x8, virtual false, abstract: false, final false
static inline float_t InCubic(float_t  t) ;

/// @brief Method InElastic, addr 0x6b5359c, size 0x78, virtual false, abstract: false, final false
static inline float_t InElastic(float_t  t) ;

/// @brief Method InOutBack, addr 0x6b537ec, size 0x7c, virtual false, abstract: false, final false
static inline float_t InOutBack(float_t  t) ;

/// @brief Method InOutBounce, addr 0x6b53548, size 0x54, virtual false, abstract: false, final false
static inline float_t InOutBounce(float_t  t) ;

/// @brief Method InOutCirc, addr 0x6b538a4, size 0x48, virtual false, abstract: false, final false
static inline float_t InOutCirc(float_t  t) ;

/// @brief Method InOutCubic, addr 0x6b533c4, size 0x48, virtual false, abstract: false, final false
static inline float_t InOutCubic(float_t  t) ;

/// @brief Method InOutElastic, addr 0x6b5368c, size 0x10c, virtual false, abstract: false, final false
static inline float_t InOutElastic(float_t  t) ;

/// @brief Method InOutPower, addr 0x6b5340c, size 0x60, virtual false, abstract: false, final false
static inline float_t InOutPower(float_t  t, int32_t  power) ;

/// @brief Method InOutQuad, addr 0x6b53318, size 0x40, virtual false, abstract: false, final false
static inline float_t InOutQuad(float_t  t) ;

/// @brief Method InOutSine, addr 0x6b532cc, size 0x34, virtual false, abstract: false, final false
static inline float_t InOutSine(float_t  t) ;

/// @brief Method InPower, addr 0x6b53360, size 0x8, virtual false, abstract: false, final false
static inline float_t InPower(float_t  t, int32_t  power) ;

/// @brief Method InQuad, addr 0x6b53300, size 0x8, virtual false, abstract: false, final false
static inline float_t InQuad(float_t  t) ;

/// @brief Method InSine, addr 0x6b53290, size 0x2c, virtual false, abstract: false, final false
static inline float_t InSine(float_t  t) ;

/// @brief Method Linear, addr 0x6b5328c, size 0x4, virtual false, abstract: false, final false
static inline float_t Linear(float_t  t) ;

/// @brief Method OutBack, addr 0x6b537bc, size 0x30, virtual false, abstract: false, final false
static inline float_t OutBack(float_t  t) ;

/// @brief Method OutBounce, addr 0x6b53490, size 0xb8, virtual false, abstract: false, final false
static inline float_t OutBounce(float_t  t) ;

/// @brief Method OutCirc, addr 0x6b53888, size 0x1c, virtual false, abstract: false, final false
static inline float_t OutCirc(float_t  t) ;

/// @brief Method OutCubic, addr 0x6b53368, size 0x24, virtual false, abstract: false, final false
static inline float_t OutCubic(float_t  t) ;

/// @brief Method OutElastic, addr 0x6b53614, size 0x78, virtual false, abstract: false, final false
static inline float_t OutElastic(float_t  t) ;

/// @brief Method OutPower, addr 0x6b5338c, size 0x38, virtual false, abstract: false, final false
static inline float_t OutPower(float_t  t, int32_t  power) ;

/// @brief Method OutQuad, addr 0x6b53308, size 0x10, virtual false, abstract: false, final false
static inline float_t OutQuad(float_t  t) ;

/// @brief Method OutSine, addr 0x6b532bc, size 0x10, virtual false, abstract: false, final false
static inline float_t OutSine(float_t  t) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Easing() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Easing", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Easing(Easing && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Easing", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Easing(Easing const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5485};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Experimental::Easing, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::Experimental
NEED_NO_BOX(::UnityEngine::UIElements::Experimental::Easing);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Experimental::Easing*, "UnityEngine.UIElements.Experimental", "Easing");
