#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_Texture2D)
namespace UnityEngine {
class Texture2D;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivableWrapperClass_1;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_Texture2D;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_Texture2D);
// Type: HoudiniEngineUnity::Test_Texture2D
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9936))
// CS Name: ::HoudiniEngineUnity::Test_Texture2D*
class CORDL_TYPE Test_Texture2D : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x8
  __declspec(property(get = __get_self, put = __set_self))::UnityEngine::Texture2D* self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Texture2D*>"
  constexpr operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Texture2D*>*() noexcept;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Texture2D*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Texture2D*>*() noexcept;

  constexpr ::UnityEngine::Texture2D*& __get_self();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> const& __get_self() const;

  constexpr void __set_self(::UnityEngine::Texture2D* value);

  static inline ::HoudiniEngineUnity::Test_Texture2D* New_ctor(::UnityEngine::Texture2D* self);

  /// @brief Method .ctor addr 0x21e7d0c size 0x28 virtual false final false
  inline void _ctor(::UnityEngine::Texture2D* self);

  /// @brief Method IsNull addr 0x21e7d34 size 0x60 virtual true final true
  inline bool IsNull();

  /// @brief Method IsEquivalentTo addr 0x21e7d94 size 0x108 virtual true final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_Texture2D* other);

  // Ctor Parameters [CppParam { name: "", ty: "Test_Texture2D", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_Texture2D(Test_Texture2D&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_Texture2D", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_Texture2D(Test_Texture2D const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_Texture2D();

public:
  /// @brief Field self, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Texture2D* ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_Texture2D, 0x18>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_Texture2D);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_Texture2D*, "HoudiniEngineUnity", "Test_Texture2D");
