#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_Material)
namespace HoudiniEngineUnity {
template <typename T> class IEquivableWrapperClass_1;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_Material;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_Material);
// Type: HoudiniEngineUnity::Test_Material
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9910))
// CS Name: ::HoudiniEngineUnity::Test_Material*
class CORDL_TYPE Test_Material : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_self, put = __cordl_internal_set_self))::UnityW<::UnityEngine::Material> self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Material*>"
  constexpr operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Material*>*() noexcept;

  /// @brief Convert to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Material*>"
  constexpr ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Material*>* i___HoudiniEngineUnity__IEquivableWrapperClass_1___HoudiniEngineUnity__Test_Material__() noexcept;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Material*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Material*>*() noexcept;

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Material*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Material*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__Test_Material__() noexcept;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_self();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_self() const;

  constexpr void __cordl_internal_set_self(::UnityW<::UnityEngine::Material> value);

  static inline ::HoudiniEngineUnity::Test_Material* New_ctor(::UnityEngine::Material* self);

  /// @brief Method .ctor, addr 0x21e4de4, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Material* self);

  /// @brief Method IsNull, addr 0x21e4e0c, size 0x60, virtual true, abstract: false, final true
  inline bool IsNull();

  /// @brief Method IsEquivalentTo, addr 0x21e4e6c, size 0xf4, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_Material* other);

  // Ctor Parameters [CppParam { name: "", ty: "Test_Material", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_Material(Test_Material&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_Material", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_Material(Test_Material const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_Material();

public:
  /// @brief Field self, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_Material, 0x18>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::Test_Material, ___self) == 0x10, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_Material);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_Material*, "HoudiniEngineUnity", "Test_Material");
