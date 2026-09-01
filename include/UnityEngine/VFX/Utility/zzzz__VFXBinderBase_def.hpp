#pragma once
// IWYU pragma private; include "UnityEngine\VFX\Utility\VFXBinderBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(VFXBinderBase)
namespace UnityEngine::VFX::Utility {
class VFXPropertyBinder;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
class VFXBinderBase;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::Utility::VFXBinderBase*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXBinderBase*, "UnityEngine.VFX.Utility", "VFXBinderBase");
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXBinderBase
class CORDL_TYPE VFXBinderBase : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field binder, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_binder, put = __cordl_internal_set_binder)) ::UnityW<::UnityEngine::VFX::Utility::VFXPropertyBinder> binder;

  /// @brief Method Awake, addr 0x69e91d4, size 0x54, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method IsValid, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool IsValid(::UnityEngine::VFX::VisualEffect* component);

  static inline ::UnityEngine::VFX::Utility::VFXBinderBase* New_ctor();

  /// @brief Method OnDisable, addr 0x69e9228, size 0xa4, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x69e583c, size 0xec, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Reset, addr 0x69e91d0, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method ToString, addr 0x69e92cc, size 0x28, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdateBinding, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void UpdateBinding(::UnityEngine::VFX::VisualEffect* component);

  constexpr ::UnityW<::UnityEngine::VFX::Utility::VFXPropertyBinder> const& __cordl_internal_get_binder() const;

  constexpr ::UnityW<::UnityEngine::VFX::Utility::VFXPropertyBinder>& __cordl_internal_get_binder();

  constexpr void __cordl_internal_set_binder(::UnityW<::UnityEngine::VFX::Utility::VFXPropertyBinder> value);

  /// @brief Method .ctor, addr 0x69e5820, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXBinderBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXBinderBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXBinderBase(VFXBinderBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXBinderBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXBinderBase(VFXBinderBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20015 };

  /// @brief Field binder, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::VFX::Utility::VFXPropertyBinder> ___binder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXBinderBase, ___binder) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXBinderBase) == 0x28, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
