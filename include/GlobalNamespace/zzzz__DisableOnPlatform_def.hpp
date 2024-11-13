#pragma once
// IWYU pragma private; include "GlobalNamespace/DisableOnPlatform.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(DisableOnPlatform)
namespace UnityEngine {
struct RuntimePlatform;
}
// Forward declare root types
namespace GlobalNamespace {
class DisableOnPlatform;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DisableOnPlatform);
// Type: ::DisableOnPlatform
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DisableOnPlatform*
class CORDL_TYPE DisableOnPlatform : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _disabledPlatforms, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__disabledPlatforms, put = __cordl_internal_set__disabledPlatforms)) ::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*>
      _disabledPlatforms;

  /// @brief Method Awake, addr 0x3969104, size 0xd0, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::DisableOnPlatform* New_ctor();

  constexpr ::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*> const& __cordl_internal_get__disabledPlatforms() const;

  constexpr ::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*>& __cordl_internal_get__disabledPlatforms();

  constexpr void __cordl_internal_set__disabledPlatforms(::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*> value);

  /// @brief Method .ctor, addr 0x39691d4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DisableOnPlatform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DisableOnPlatform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DisableOnPlatform(DisableOnPlatform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DisableOnPlatform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DisableOnPlatform(DisableOnPlatform const&) = delete;

  /// @brief Field _disabledPlatforms, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*> ____disabledPlatforms;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18751 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DisableOnPlatform, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DisableOnPlatform, ____disabledPlatforms) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DisableOnPlatform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DisableOnPlatform*, "", "DisableOnPlatform");
