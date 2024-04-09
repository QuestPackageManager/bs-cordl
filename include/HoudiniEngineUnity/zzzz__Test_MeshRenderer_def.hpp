#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Test_MeshRenderer)
namespace HoudiniEngineUnity {
template <typename T> class IEquivableWrapperClass_1;
}
namespace HoudiniEngineUnity {
template <typename T> class IEquivable_1;
}
namespace UnityEngine {
class MeshRenderer;
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
// CS Name: ::HoudiniEngineUnity::Test_MeshRenderer*
class CORDL_TYPE Test_MeshRenderer : public ::System::Object {
public:
  // Declarations
  /// @brief Field self, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_self, put = __cordl_internal_set_self))::UnityW<::UnityEngine::MeshRenderer> self;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_MeshRenderer*>"
  constexpr operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_MeshRenderer*>*() noexcept;

  /// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_MeshRenderer*>"
  constexpr operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_MeshRenderer*>*() noexcept;

  /// @brief Method IsEquivalentTo, addr 0x24c8210, size 0x13c, virtual true, abstract: false, final true
  inline bool IsEquivalentTo(::HoudiniEngineUnity::Test_MeshRenderer* other);

  /// @brief Method IsNull, addr 0x24c81b0, size 0x60, virtual true, abstract: false, final true
  inline bool IsNull();

  static inline ::HoudiniEngineUnity::Test_MeshRenderer* New_ctor(::UnityEngine::MeshRenderer* self);

  constexpr ::UnityW<::UnityEngine::MeshRenderer> const& __cordl_internal_get_self() const;

  constexpr ::UnityW<::UnityEngine::MeshRenderer>& __cordl_internal_get_self();

  constexpr void __cordl_internal_set_self(::UnityW<::UnityEngine::MeshRenderer> value);

  /// @brief Method .ctor, addr 0x24c8188, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::MeshRenderer* self);

  /// @brief Convert to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_MeshRenderer*>"
  constexpr ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_MeshRenderer*>*
  i___HoudiniEngineUnity__IEquivableWrapperClass_1___HoudiniEngineUnity__Test_MeshRenderer__() noexcept;

  /// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_MeshRenderer*>"
  constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_MeshRenderer*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__Test_MeshRenderer__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Test_MeshRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Test_MeshRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Test_MeshRenderer(Test_MeshRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Test_MeshRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Test_MeshRenderer(Test_MeshRenderer const&) = delete;

  /// @brief Field self, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::MeshRenderer> ___self;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::Test_MeshRenderer, 0x18>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::Test_MeshRenderer, ___self) == 0x10, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::Test_MeshRenderer);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_MeshRenderer*, "HoudiniEngineUnity", "Test_MeshRenderer");
