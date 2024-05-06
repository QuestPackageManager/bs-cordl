#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ClipperRegistry)
namespace UnityEngine::UI::Collections {
template <typename T> class IndexedSet_1;
}
namespace UnityEngine::UI {
class IClipper;
}
// Forward declare root types
namespace UnityEngine::UI {
class ClipperRegistry;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::ClipperRegistry);
// Type: UnityEngine.UI::ClipperRegistry
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::ClipperRegistry*
class CORDL_TYPE ClipperRegistry : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Clippers, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Clippers, put = __cordl_internal_set_m_Clippers))::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::IClipper*>* m_Clippers;

  /// @brief Field s_Instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Instance, put = setStaticF_s_Instance))::UnityEngine::UI::ClipperRegistry* s_Instance;

  /// @brief Method Cull, addr 0x34a6ef0, size 0x10c, virtual false, abstract: false, final false
  inline void Cull();

  /// @brief Method Disable, addr 0x34a8198, size 0x5c, virtual false, abstract: false, final false
  static inline void Disable(::UnityEngine::UI::IClipper* c);

  static inline ::UnityEngine::UI::ClipperRegistry* New_ctor();

  /// @brief Method Register, addr 0x34a80cc, size 0x70, virtual false, abstract: false, final false
  static inline void Register(::UnityEngine::UI::IClipper* c);

  /// @brief Method Unregister, addr 0x34a813c, size 0x5c, virtual false, abstract: false, final false
  static inline void Unregister(::UnityEngine::UI::IClipper* c);

  constexpr ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::IClipper*>*& __cordl_internal_get_m_Clippers();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::IClipper*>*> const& __cordl_internal_get_m_Clippers() const;

  constexpr void __cordl_internal_set_m_Clippers(::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::IClipper*>* value);

  /// @brief Method .ctor, addr 0x34a8050, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UI::ClipperRegistry* getStaticF_s_Instance();

  /// @brief Method get_instance, addr 0x34a6e74, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UI::ClipperRegistry* get_instance();

  static inline void setStaticF_s_Instance(::UnityEngine::UI::ClipperRegistry* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClipperRegistry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClipperRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClipperRegistry(ClipperRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClipperRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClipperRegistry(ClipperRegistry const&) = delete;

  /// @brief Field m_Clippers, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::IClipper*>* ___m_Clippers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::ClipperRegistry, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::ClipperRegistry, ___m_Clippers) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::ClipperRegistry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::ClipperRegistry*, "UnityEngine.UI", "ClipperRegistry");
