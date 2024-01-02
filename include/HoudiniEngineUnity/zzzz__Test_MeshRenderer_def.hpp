#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_MeshRenderer)
namespace UnityEngine {
class MeshRenderer;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivableWrapperClass_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_MeshRenderer;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::Test_MeshRenderer);
// Type: HoudiniEngineUnity::Test_MeshRenderer
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9919))
// CS Name: ::HoudiniEngineUnity::Test_MeshRenderer*
class CORDL_TYPE Test_MeshRenderer : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x8
  __declspec(property(get = __get_self, put = __set_self))::UnityEngine::MeshRenderer* self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_MeshRenderer*>"
  constexpr operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_MeshRenderer*>*() noexcept;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_MeshRenderer*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_MeshRenderer*>*() noexcept;

  constexpr ::UnityEngine::MeshRenderer*& __get_self();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> const& __get_self() const;

  constexpr void __set_self(::UnityEngine::MeshRenderer* value);

  static inline ::HoudiniEngineUnity::Test_MeshRenderer* New_ctor(::UnityEngine::MeshRenderer* self);

  /// @brief Method .ctor, addr 0x21e5f14, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::MeshRenderer* self);

  /// @brief Method IsNull, addr 0x21e5f3c, size 0x60, virtual true, abstract: false, final true
  inline bool IsNull();

  /// @brief Method IsEquivalentTo, addr 0x21e5f9c, size 0x13c, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_MeshRenderer* other);

  // Ctor Parameters [CppParam { name: "", ty: "Test_MeshRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_MeshRenderer(Test_MeshRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_MeshRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_MeshRenderer(Test_MeshRenderer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_MeshRenderer();

public:
  /// @brief Field self, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::MeshRenderer* ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_MeshRenderer, 0x18>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::Test_MeshRenderer, ___self) == 0x10, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_MeshRenderer);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_MeshRenderer*, "HoudiniEngineUnity", "Test_MeshRenderer");
