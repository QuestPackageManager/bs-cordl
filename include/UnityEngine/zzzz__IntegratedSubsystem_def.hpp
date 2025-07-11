#pragma once
// IWYU pragma private; include "UnityEngine/IntegratedSubsystem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ISubsystem_def.hpp"
CORDL_MODULE_EXPORT(IntegratedSubsystem)
namespace UnityEngine {
class ISubsystemDescriptor;
}
// Forward declare root types
namespace UnityEngine {
class IntegratedSubsystem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::IntegratedSubsystem);
// Dependencies System.IntPtr, System.Object, UnityEngine.ISubsystem
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.IntegratedSubsystem
class CORDL_TYPE IntegratedSubsystem : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Field m_SubsystemDescriptor, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SubsystemDescriptor, put = __cordl_internal_set_m_SubsystemDescriptor)) ::UnityEngine::ISubsystemDescriptor* m_SubsystemDescriptor;

  __declspec(property(get = get_running)) bool running;

  __declspec(property(get = get_valid)) bool valid;

  /// @brief Convert operator to "::UnityEngine::ISubsystem"
  constexpr operator ::UnityEngine::ISubsystem*() noexcept;

  /// @brief Method Destroy, addr 0x491abe0, size 0x88, virtual true, abstract: false, final true
  inline void Destroy();

  /// @brief Method IsRunning, addr 0x491ae6c, size 0x3c, virtual false, abstract: false, final false
  inline bool IsRunning();

  static inline ::UnityEngine::IntegratedSubsystem* New_ctor();

  /// @brief Method SetHandle, addr 0x491ab24, size 0x44, virtual false, abstract: false, final false
  inline void SetHandle(::UnityEngine::IntegratedSubsystem* subsystem);

  /// @brief Method Start, addr 0x491ab68, size 0x3c, virtual true, abstract: false, final true
  inline void Start();

  /// @brief Method Stop, addr 0x491aba4, size 0x3c, virtual true, abstract: false, final true
  inline void Stop();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr ::UnityEngine::ISubsystemDescriptor* const& __cordl_internal_get_m_SubsystemDescriptor() const;

  constexpr ::UnityEngine::ISubsystemDescriptor*& __cordl_internal_get_m_SubsystemDescriptor();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_SubsystemDescriptor(::UnityEngine::ISubsystemDescriptor* value);

  /// @brief Method .ctor, addr 0x491aea8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_running, addr 0x491adfc, size 0x60, virtual true, abstract: false, final true
  inline bool get_running();

  /// @brief Method get_valid, addr 0x491ae5c, size 0x10, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18732 };

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
