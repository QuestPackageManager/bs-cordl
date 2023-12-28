#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_Mesh)
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivableWrapperClass_1;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_Mesh;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_Mesh);
// Type: HoudiniEngineUnity::Test_Mesh
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9916))
// CS Name: ::HoudiniEngineUnity::Test_Mesh*
class CORDL_TYPE Test_Mesh : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x8
  __declspec(property(get = __get_self, put = __set_self))::UnityEngine::Mesh* self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Mesh*>"
  constexpr operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Mesh*>*() noexcept;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Mesh*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Mesh*>*() noexcept;

  constexpr ::UnityEngine::Mesh*& __get_self();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Mesh*> const& __get_self() const;

  constexpr void __set_self(::UnityEngine::Mesh* value);

  static inline ::HoudiniEngineUnity::Test_Mesh* New_ctor(::UnityEngine::Mesh* self);

  /// @brief Method .ctor addr 0x21e56d4 size 0x28 virtual false final false
  inline void _ctor(::UnityEngine::Mesh* self);

  /// @brief Method IsNull addr 0x21e56fc size 0x60 virtual true final true
  inline bool IsNull();

  /// @brief Method IsEquivalentTo addr 0x21e575c size 0x42c virtual true final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_Mesh* other);

  // Ctor Parameters [CppParam { name: "", ty: "Test_Mesh", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_Mesh(Test_Mesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_Mesh", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_Mesh(Test_Mesh const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_Mesh();

public:
  /// @brief Field self, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Mesh* ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_Mesh, 0x18>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_Mesh);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_Mesh*, "HoudiniEngineUnity", "Test_Mesh");
