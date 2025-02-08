#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/Test_Mesh.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__IEquivableWrapperClass_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_Mesh)
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_Mesh;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_Mesh);
// Dependencies HoudiniEngineUnity.IEquivableWrapperClass`1<T>, HoudiniEngineUnity.IEquivable`1<T>, System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.Test_Mesh
class CORDL_TYPE Test_Mesh : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_self, put = __cordl_internal_set_self)) ::UnityW<::UnityEngine::Mesh> self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Mesh*>"
  constexpr operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Mesh*>*() noexcept;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Mesh*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Mesh*>*() noexcept;

  /// @brief Method IsEquivalentTo, addr 0x3a9e834, size 0x42c, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_Mesh* other);

  /// @brief Method IsNull, addr 0x3a9e7d4, size 0x60, virtual true, abstract: false, final true
  inline bool IsNull();

  static inline ::HoudiniEngineUnity::Test_Mesh* New_ctor(::UnityEngine::Mesh* self);

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_self() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_self();

  constexpr void __cordl_internal_set_self(::UnityW<::UnityEngine::Mesh> value);

  /// @brief Method .ctor, addr 0x3a9e7ac, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Mesh* self);

  /// @brief Convert to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Mesh*>"
  constexpr ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Mesh*>* i___HoudiniEngineUnity__IEquivableWrapperClass_1___HoudiniEngineUnity__Test_Mesh__() noexcept;

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Mesh*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Mesh*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__Test_Mesh__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_Mesh();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_Mesh", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_Mesh(Test_Mesh&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_Mesh", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_Mesh(Test_Mesh const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11902 };

  /// @brief Field self, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::Test_Mesh, ___self) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_Mesh, 0x18>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_Mesh);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_Mesh*, "HoudiniEngineUnity", "Test_Mesh");
