#pragma once
// IWYU pragma private; include "UnityEngine\Ping.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
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
MARK_REF_T(::UnityEngine::Ping*);
MARK_REF_T(::UnityEngine::Ping_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Ping*, "UnityEngine", "Ping");
DEFINE_IL2CPP_CLASS(::UnityEngine::Ping_BindingsMarshaller*, "UnityEngine", "Ping/BindingsMarshaller");
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Ping/BindingsMarshaller
class CORDL_TYPE Ping_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x6ad652c, size 0x14, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10269 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Ping_BindingsMarshaller) == 0x10, "Size mismatch!");

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

  /// @brief Method DestroyPing, addr 0x6ad633c, size 0x4c, virtual false, abstract: false, final false
  inline void DestroyPing();

  /// @brief Method Finalize, addr 0x6ad62bc, size 0x80, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method Internal_Create, addr 0x6ad6190, size 0x12c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_Create(::StringW address);

  /// @brief Method Internal_Create_Injected, addr 0x6ad63c4, size 0x3c, virtual false, abstract: false, final false
  static inline ::System::IntPtr Internal_Create_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> address);

  /// @brief Method Internal_Destroy, addr 0x6ad6388, size 0x3c, virtual false, abstract: false, final false
  static inline void Internal_Destroy(::System::IntPtr ptr);

  /// @brief Method Internal_IsDone, addr 0x6ad6414, size 0x50, virtual false, abstract: false, final false
  inline bool Internal_IsDone();

  /// @brief Method Internal_IsDone_Injected, addr 0x6ad6464, size 0x3c, virtual false, abstract: false, final false
  static inline bool Internal_IsDone_Injected(::System::IntPtr _unity_self);

  static inline ::UnityEngine::Ping* New_ctor(::StringW address);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x6ad6174, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::StringW address);

  /// @brief Method get_isDone, addr 0x6ad6400, size 0x14, virtual false, abstract: false, final false
  inline bool get_isDone();

  /// @brief Method get_time, addr 0x6ad64a0, size 0x50, virtual false, abstract: false, final false
  inline int32_t get_time();

  /// @brief Method get_time_Injected, addr 0x6ad64f0, size 0x3c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10270 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Ping, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Ping) == 0x18, "Size mismatch!");

} // namespace UnityEngine
