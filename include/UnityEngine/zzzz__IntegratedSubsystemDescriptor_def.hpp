#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IntegratedSubsystemDescriptor)
namespace UnityEngine {
class ISubsystem;
}
namespace UnityEngine {
class ISubsystemDescriptor;
}
// Forward declare root types
namespace UnityEngine {
class IntegratedSubsystemDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::IntegratedSubsystemDescriptor);
// Type: UnityEngine::IntegratedSubsystemDescriptor
// SizeInfo { instance_size: 24, native_size: 8, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15959))
// CS Name: ::UnityEngine::IntegratedSubsystemDescriptor*
class CORDL_TYPE IntegratedSubsystemDescriptor : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_Ptr, offset 0x10, size 0x8
  __declspec(property(get = __get_m_Ptr, put = __set_m_Ptr)) void* m_Ptr;

  __declspec(property(get = get_id))::StringW id;

  /// @brief Convert operator to "::UnityEngine::ISubsystemDescriptor"
  constexpr operator ::UnityEngine::ISubsystemDescriptor*() noexcept;

  constexpr void*& __get_m_Ptr();

  constexpr void* const& __get_m_Ptr() const;

  constexpr void __set_m_Ptr(void* value);

  /// @brief Method get_id, addr 0x2d1a10c, size 0x3c, virtual true, abstract: false, final true
  inline ::StringW get_id();

  /// @brief Method UnityEngine.ISubsystemDescriptor.Create, addr 0x2d1a184, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::ISubsystem* UnityEngine_ISubsystemDescriptor_Create();

  /// @brief Method CreateImpl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::ISubsystem* CreateImpl();

  static inline ::UnityEngine::IntegratedSubsystemDescriptor* New_ctor();

  /// @brief Method .ctor, addr 0x2d1a190, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystemDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IntegratedSubsystemDescriptor(IntegratedSubsystemDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystemDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IntegratedSubsystemDescriptor(IntegratedSubsystemDescriptor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntegratedSubsystemDescriptor();

public:
  /// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
  void* ___m_Ptr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::IntegratedSubsystemDescriptor, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::IntegratedSubsystemDescriptor, ___m_Ptr) == 0x10, "Offset mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::IntegratedSubsystemDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IntegratedSubsystemDescriptor*, "UnityEngine", "IntegratedSubsystemDescriptor");
