#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_AnimationCurve)
namespace HoudiniEngineUnity {
template <typename T> class IEquivableWrapperClass_1;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace UnityEngine {
class AnimationCurve;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_AnimationCurve;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_AnimationCurve);
// Type: HoudiniEngineUnity::Test_AnimationCurve
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::Test_AnimationCurve*
class CORDL_TYPE Test_AnimationCurve : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_self, put = __cordl_internal_set_self))::UnityEngine::AnimationCurve* self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_AnimationCurve*>"
  constexpr operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_AnimationCurve*>*() noexcept;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_AnimationCurve*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_AnimationCurve*>*() noexcept;

  /// @brief Method IsEquivalentTo, addr 0x2348f14, size 0xe0, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_AnimationCurve* other);

  /// @brief Method IsNull, addr 0x2348f04, size 0x10, virtual true, abstract: false, final true
  inline bool IsNull();

  static inline ::HoudiniEngineUnity::Test_AnimationCurve* New_ctor(::UnityEngine::AnimationCurve* self);

  constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_self();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get_self() const;

  constexpr void __cordl_internal_set_self(::UnityEngine::AnimationCurve* value);

  /// @brief Method .ctor, addr 0x2348edc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::AnimationCurve* self);

  /// @brief Convert to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_AnimationCurve*>"
  constexpr ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_AnimationCurve*>*
  i___HoudiniEngineUnity__IEquivableWrapperClass_1___HoudiniEngineUnity__Test_AnimationCurve__() noexcept;

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_AnimationCurve*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_AnimationCurve*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__Test_AnimationCurve__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_AnimationCurve();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_AnimationCurve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_AnimationCurve(Test_AnimationCurve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_AnimationCurve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_AnimationCurve(Test_AnimationCurve const&) = delete;

  /// @brief Field self, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_AnimationCurve, 0x18>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::Test_AnimationCurve, ___self) == 0x10, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_AnimationCurve);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_AnimationCurve*, "HoudiniEngineUnity", "Test_AnimationCurve");
