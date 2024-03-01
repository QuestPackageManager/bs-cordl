#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ISubsystemDescriptor)
namespace UnityEngine {
class ISubsystem;
}
// Forward declare root types
namespace UnityEngine {
class ISubsystemDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ISubsystemDescriptor);
// Type: UnityEngine::ISubsystemDescriptor
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::ISubsystemDescriptor*
class CORDL_TYPE ISubsystemDescriptor {
public:
  // Declarations
  __declspec(property(get = get_id))::StringW id;

  /// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::ISubsystem* Create();

  /// @brief Method get_id, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW get_id();

  // Ctor Parameters [CppParam { name: "", ty: "ISubsystemDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ISubsystemDescriptor(ISubsystemDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ISubsystemDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ISubsystemDescriptor(ISubsystemDescriptor const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::ISubsystemDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ISubsystemDescriptor*, "UnityEngine", "ISubsystemDescriptor");
