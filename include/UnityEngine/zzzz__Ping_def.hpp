#pragma once
// IWYU pragma private; include "UnityEngine/Ping.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Ping)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine {
class Ping_BindingsMarshaller;
}
// Forward declare root types
namespace UnityEngine {
class Ping;
}
namespace UnityEngine {
class Ping_BindingsMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Ping);
MARK_REF_PTR_T(::UnityEngine::Ping_BindingsMarshaller);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Ping/BindingsMarshaller
class CORDL_TYPE Ping_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x690ba28, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::Ping* ping);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Ping_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Ping_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Ping_BindingsMarshaller(Ping_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Ping_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Ping_BindingsMarshaller(Ping_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10249 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Ping_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Ping
class CORDL_TYPE Ping : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::Ping_BindingsMarshaller;

  __declspec(property(get = get_isDone)) bool isDone;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  __declspec(property(get = get_time)) int32_t time;

  /// @brief Method DestroyPing, addr 0x690b838, size 0x4c, virtual false, abstract: false, final false
  inline void DestroyPing();

  /// @brief Method Finalize, addr 0x690b7b8, size 0x80, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method Internal_Create, addr 0x690b68c, size 0x12c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_Create(::StringW address);

  /// @brief Method Internal_Create_Injected, addr 0x690b8c0, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_Create_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> address);

  /// @brief Method Internal_Destroy, addr 0x690b884, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Destroy(::System::IntPtr ptr);

  /// @brief Method Internal_IsDone, addr 0x690b910, size 0x50, virtual false, abstract: false, final false
  inline bool Internal_IsDone();

  /// @brief Method Internal_IsDone_Injected, addr 0x690b960, size 0x3c, virtual false, abstract: false, final false
  static inline bool Internal_IsDone_Injected(::System::IntPtr _unity_self);

  static inline ::UnityEngine::Ping* New_ctor(::StringW address);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x690b670, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::StringW address);

  /// @brief Method get_isDone, addr 0x690b8fc, size 0x14, virtual false, abstract: false, final false
  inline bool get_isDone();

  /// @brief Method get_time, addr 0x690b99c, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_time();

  /// @brief Method get_time_Injected, addr 0x690b9ec, size 0x3c, virtual false, abstract: false, final false
  static inline int32_t get_time_Injected(::System::IntPtr _unity_self);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Ping();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Ping", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Ping(Ping&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Ping", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Ping(Ping const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10250 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Ping, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Ping, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Ping);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Ping*, "UnityEngine", "Ping");
NEED_NO_BOX(::UnityEngine::Ping_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Ping_BindingsMarshaller*, "UnityEngine", "Ping/BindingsMarshaller");
