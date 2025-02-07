#pragma once
// IWYU pragma private; include "UnityEngine/IntegratedSubsystemDescriptor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ISubsystemDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IntegratedSubsystemDescriptor)
namespace UnityEngine {
class ISubsystem;
}
// Forward declare root types
namespace UnityEngine {
class IntegratedSubsystemDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::IntegratedSubsystemDescriptor);
// Dependencies System.IntPtr, System.Object, UnityEngine.ISubsystemDescriptor
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.IntegratedSubsystemDescriptor
class CORDL_TYPE IntegratedSubsystemDescriptor : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_id)) ::StringW id;

  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Ptr, put = __cordl_internal_set_m_Ptr)) ::System::IntPtr m_Ptr;

  /// @brief Convert operator to "::UnityEngine::ISubsystemDescriptor"
  constexpr operator ::UnityEngine::ISubsystemDescriptor*() noexcept;

  /// @brief Method CreateImpl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::ISubsystem* CreateImpl();

  static inline ::UnityEngine::IntegratedSubsystemDescriptor* New_ctor();

  /// @brief Method UnityEngine.ISubsystemDescriptor.Create, addr 0x491e698, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::ISubsystem* UnityEngine_ISubsystemDescriptor_Create();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr();

  constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x491e6a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_id, addr 0x491e620, size 0x3c, virtual true, abstract: false, final true
  inline ::StringW get_id();

  /// @brief Convert to "::UnityEngine::ISubsystemDescriptor"
  constexpr ::UnityEngine::ISubsystemDescriptor* i___UnityEngine__ISubsystemDescriptor() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegratedSubsystemDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystemDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntegratedSubsystemDescriptor(IntegratedSubsystemDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystemDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntegratedSubsystemDescriptor(IntegratedSubsystemDescriptor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18728 };

  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::IntegratedSubsystemDescriptor, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::IntegratedSubsystemDescriptor, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::IntegratedSubsystemDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IntegratedSubsystemDescriptor*, "UnityEngine", "IntegratedSubsystemDescriptor");
