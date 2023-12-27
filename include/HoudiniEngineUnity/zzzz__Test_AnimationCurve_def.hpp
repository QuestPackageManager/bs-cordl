#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_AnimationCurve)
namespace UnityEngine {
class AnimationCurve;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivableWrapperClass_1;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9930))
// CS Name: ::HoudiniEngineUnity::Test_AnimationCurve*
class CORDL_TYPE Test_AnimationCurve : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x8
  __declspec(property(get = __get_self, put = __set_self))::UnityEngine::AnimationCurve* self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_AnimationCurve*>"
  constexpr operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_AnimationCurve*>*() noexcept;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_AnimationCurve*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_AnimationCurve*>*() noexcept;

  constexpr ::UnityEngine::AnimationCurve*& __get_self();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __get_self() const;

  constexpr void __set_self(::UnityEngine::AnimationCurve* value);

  static inline ::HoudiniEngineUnity::Test_AnimationCurve* New_ctor(::UnityEngine::AnimationCurve* self);

  /// @brief Method .ctor addr 0x21e6f8c size 0x28 virtual false final false
  inline void _ctor(::UnityEngine::AnimationCurve* self);

  /// @brief Method IsNull addr 0x21e6fb4 size 0x10 virtual true final true
  inline bool IsNull();

  /// @brief Method IsEquivalentTo addr 0x21e6fc4 size 0xe0 virtual true final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_AnimationCurve* other);

  // Ctor Parameters [CppParam { name: "", ty: "Test_AnimationCurve", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_AnimationCurve(Test_AnimationCurve&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_AnimationCurve", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_AnimationCurve(Test_AnimationCurve const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_AnimationCurve();

public:
  /// @brief Field self, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AnimationCurve* ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_AnimationCurve, 0x18>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_AnimationCurve);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_AnimationCurve*, "HoudiniEngineUnity", "Test_AnimationCurve");
