#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_Gradient)
namespace UnityEngine {
class Gradient;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivableWrapperClass_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_Gradient;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_Gradient);
// Type: HoudiniEngineUnity::Test_Gradient
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9854))
// CS Name: ::HoudiniEngineUnity::Test_Gradient*
class CORDL_TYPE Test_Gradient : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x8
  __declspec(property(get = __get_self, put = __set_self))::UnityEngine::Gradient* self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Gradient*>"
  constexpr operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Gradient*>*() noexcept;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Gradient*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Gradient*>*() noexcept;

  constexpr ::UnityEngine::Gradient*& __get_self();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Gradient*> const& __get_self() const;

  constexpr void __set_self(::UnityEngine::Gradient* value);

  static inline ::HoudiniEngineUnity::Test_Gradient* New_ctor(::UnityEngine::Gradient* self);

  /// @brief Method .ctor addr 0x208e138 size 0x28 virtual false final false
  inline void _ctor(::UnityEngine::Gradient* self);

  /// @brief Method IsNull addr 0x208e160 size 0x10 virtual true final true
  inline bool IsNull();

  /// @brief Method IsEquivalentTo addr 0x208e170 size 0xf4 virtual true final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_Gradient* other);

  // Ctor Parameters [CppParam { name: "", ty: "Test_Gradient", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_Gradient(Test_Gradient&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_Gradient", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_Gradient(Test_Gradient const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_Gradient();

public:
  /// @brief Field self, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Gradient* ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_Gradient, 0x18>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::Test_Gradient, ___self) == 0x10, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_Gradient);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_Gradient*, "HoudiniEngineUnity", "Test_Gradient");
