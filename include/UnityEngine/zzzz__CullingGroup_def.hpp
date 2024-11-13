#pragma once
// IWYU pragma private; include "UnityEngine/CullingGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CullingGroup)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct CullingGroupEvent;
}
namespace UnityEngine {
class __CullingGroup__StateChanged;
}
// Forward declare root types
namespace UnityEngine {
class CullingGroup;
}
namespace UnityEngine {
class __CullingGroup__StateChanged;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::CullingGroup);
MARK_REF_PTR_T(::UnityEngine::__CullingGroup__StateChanged);
// Type: ::StateChanged
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::CullingGroup::StateChanged*
class CORDL_TYPE __CullingGroup__StateChanged : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x4806814, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::CullingGroupEvent sphere);

  static inline ::UnityEngine::__CullingGroup__StateChanged* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x4806788, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CullingGroup__StateChanged();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__CullingGroup__StateChanged", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CullingGroup__StateChanged(__CullingGroup__StateChanged&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CullingGroup__StateChanged", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CullingGroup__StateChanged(__CullingGroup__StateChanged const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10645 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__CullingGroup__StateChanged, 0x80>, "Size mismatch!");

} // namespace UnityEngine
// Type: UnityEngine::CullingGroup
// SizeInfo { instance_size: 32, native_size: 16, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::CullingGroup*
class CORDL_TYPE CullingGroup : public ::System::Object {
public:
  // Declarations
  using StateChanged = ::UnityEngine::__CullingGroup__StateChanged;

  /// @brief Field m_OnStateChanged, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnStateChanged, put = __cordl_internal_set_m_OnStateChanged)) ::UnityEngine::__CullingGroup__StateChanged* m_OnStateChanged;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Method SendEvents, addr 0x480672c, size 0x5c, virtual false, abstract: false, final false
  static inline void SendEvents(::UnityEngine::CullingGroup* cullingGroup, ::System::IntPtr eventsPtr, int32_t count);

  constexpr ::UnityEngine::__CullingGroup__StateChanged*& __cordl_internal_get_m_OnStateChanged();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::__CullingGroup__StateChanged*> const& __cordl_internal_get_m_OnStateChanged() const;

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_OnStateChanged(::UnityEngine::__CullingGroup__StateChanged* value);

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CullingGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CullingGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CullingGroup(CullingGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CullingGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CullingGroup(CullingGroup const&) = delete;

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  /// @brief Field m_OnStateChanged, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::__CullingGroup__StateChanged* ___m_OnStateChanged;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10646 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CullingGroup, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::CullingGroup, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::CullingGroup, ___m_OnStateChanged) == 0x18, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::CullingGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CullingGroup*, "UnityEngine", "CullingGroup");
NEED_NO_BOX(::UnityEngine::__CullingGroup__StateChanged);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__CullingGroup__StateChanged*, "UnityEngine", "CullingGroup/StateChanged");
