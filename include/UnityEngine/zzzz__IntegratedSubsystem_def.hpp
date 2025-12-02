#pragma once
// IWYU pragma private; include "UnityEngine/IntegratedSubsystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(IntegratedSubsystem)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
class ISubsystemDescriptor;
}
namespace UnityEngine {
class ISubsystem;
}
namespace UnityEngine {
class IntegratedSubsystem_BindingsMarshaller;
}
// Forward declare root types
namespace UnityEngine {
class IntegratedSubsystem;
}
namespace UnityEngine {
class IntegratedSubsystem_BindingsMarshaller;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::IntegratedSubsystem);
MARK_REF_PTR_T(::UnityEngine::IntegratedSubsystem_BindingsMarshaller);
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.IntegratedSubsystem/BindingsMarshaller
class CORDL_TYPE IntegratedSubsystem_BindingsMarshaller : public ::System::Object {
public:
  // Declarations
  /// @brief Method ConvertToNative, addr 0x6983fac, size 0x14, virtual false, abstract: false, final false
  static inline ::System::IntPtr ConvertToNative(::UnityEngine::IntegratedSubsystem* integratedSubsystem);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegratedSubsystem_BindingsMarshaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystem_BindingsMarshaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntegratedSubsystem_BindingsMarshaller(IntegratedSubsystem_BindingsMarshaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystem_BindingsMarshaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntegratedSubsystem_BindingsMarshaller(IntegratedSubsystem_BindingsMarshaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22500 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::IntegratedSubsystem_BindingsMarshaller, 0x10>, "Size mismatch!");

} // namespace UnityEngine
// Dependencies System.IntPtr, System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.IntegratedSubsystem
class CORDL_TYPE IntegratedSubsystem : public ::System::Object {
public:
  // Declarations
  using BindingsMarshaller = ::UnityEngine::IntegratedSubsystem_BindingsMarshaller;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Field m_SubsystemDescriptor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SubsystemDescriptor, put = __cordl_internal_set_m_SubsystemDescriptor)) ::UnityEngine::ISubsystemDescriptor* m_SubsystemDescriptor;

  __declspec(property(get = get_running)) bool running;

  __declspec(property(get = get_valid)) bool valid;

  /// @brief Convert operator to "::UnityEngine::ISubsystem"
  constexpr operator ::UnityEngine::ISubsystem*() noexcept;

  /// @brief Method Destroy, addr 0x6983cc8, size 0x8c, virtual true, abstract: false, final true
  inline void Destroy();

  /// @brief Method IsRunning, addr 0x6983f1c, size 0x50, virtual false, abstract: false, final false
  inline bool IsRunning();

  /// @brief Method IsRunning_Injected, addr 0x6983f6c, size 0x3c, virtual false, abstract: false, final false
  static inline bool IsRunning_Injected(::System::IntPtr _unity_self);

  static inline ::UnityEngine::IntegratedSubsystem* New_ctor();

  /// @brief Method SetHandle, addr 0x6983b14, size 0x58, virtual false, abstract: false, final false
  inline void SetHandle(::UnityEngine::IntegratedSubsystem* subsystem);

  /// @brief Method SetHandle_Injected, addr 0x6983b6c, size 0x44, virtual false, abstract: false, final false
  static inline void SetHandle_Injected(::System::IntPtr _unity_self, ::UnityEngine::IntegratedSubsystem* subsystem);

  /// @brief Method Start, addr 0x6983bb0, size 0x50, virtual true, abstract: false, final true
  inline void Start();

  /// @brief Method Start_Injected, addr 0x6983c00, size 0x3c, virtual false, abstract: false, final false
  static inline void Start_Injected(::System::IntPtr _unity_self);

  /// @brief Method Stop, addr 0x6983c3c, size 0x50, virtual true, abstract: false, final true
  inline void Stop();

  /// @brief Method Stop_Injected, addr 0x6983c8c, size 0x3c, virtual false, abstract: false, final false
  static inline void Stop_Injected(::System::IntPtr _unity_self);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr ::UnityEngine::ISubsystemDescriptor* const& __cordl_internal_get_m_SubsystemDescriptor() const;

  constexpr ::UnityEngine::ISubsystemDescriptor*& __cordl_internal_get_m_SubsystemDescriptor();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_SubsystemDescriptor(::UnityEngine::ISubsystemDescriptor* value);

  /// @brief Method .ctor, addr 0x6983fa8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_running, addr 0x6983ef8, size 0x14, virtual true, abstract: false, final true
  inline bool get_running();

  /// @brief Method get_valid, addr 0x6983f0c, size 0x10, virtual false, abstract: false, final false
  inline bool get_valid();

  /// @brief Convert to "::UnityEngine::ISubsystem"
  constexpr ::UnityEngine::ISubsystem* i___UnityEngine__ISubsystem() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegratedSubsystem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntegratedSubsystem(IntegratedSubsystem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntegratedSubsystem(IntegratedSubsystem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22501 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  /// @brief Field m_SubsystemDescriptor, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::ISubsystemDescriptor* ___m_SubsystemDescriptor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::IntegratedSubsystem, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::IntegratedSubsystem, ___m_SubsystemDescriptor) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::IntegratedSubsystem, 0x20>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::IntegratedSubsystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IntegratedSubsystem*, "UnityEngine", "IntegratedSubsystem");
NEED_NO_BOX(::UnityEngine::IntegratedSubsystem_BindingsMarshaller);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IntegratedSubsystem_BindingsMarshaller*, "UnityEngine", "IntegratedSubsystem/BindingsMarshaller");
