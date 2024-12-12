#pragma once
// IWYU pragma private; include "UnityEngine/SubsystemDescriptor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ISubsystemDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SubsystemDescriptor)
namespace UnityEngine {
class ISubsystem;
}
// Forward declare root types
namespace UnityEngine {
class SubsystemDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SubsystemDescriptor);
// Dependencies System.Object, UnityEngine.ISubsystemDescriptor
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.SubsystemDescriptor
class CORDL_TYPE SubsystemDescriptor : public ::System::Object {
public:
  // Declarations
  /// @brief Field <id>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__id_k__BackingField, put = __cordl_internal_set__id_k__BackingField)) ::StringW _id_k__BackingField;

  __declspec(property(get = get_id)) ::StringW id;

  /// @brief Convert operator to "::UnityEngine::ISubsystemDescriptor"
  constexpr operator ::UnityEngine::ISubsystemDescriptor*() noexcept;

  /// @brief Method CreateImpl, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::UnityEngine::ISubsystem* CreateImpl();

  static inline ::UnityEngine::SubsystemDescriptor* New_ctor();

  /// @brief Method UnityEngine.ISubsystemDescriptor.Create, addr 0x4918930, size 0xc, virtual true, abstract: false, final true
  inline ::UnityEngine::ISubsystem* UnityEngine_ISubsystemDescriptor_Create();

  constexpr ::StringW const& __cordl_internal_get__id_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__id_k__BackingField();

  constexpr void __cordl_internal_set__id_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x491893c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_id, addr 0x4918928, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_id();

  /// @brief Convert to "::UnityEngine::ISubsystemDescriptor"
  constexpr ::UnityEngine::ISubsystemDescriptor* i___UnityEngine__ISubsystemDescriptor() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubsystemDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubsystemDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubsystemDescriptor(SubsystemDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubsystemDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubsystemDescriptor(SubsystemDescriptor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18727 };

  /// @brief Field <id>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____id_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::SubsystemDescriptor, ____id_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::SubsystemDescriptor, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::SubsystemDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SubsystemDescriptor*, "UnityEngine", "SubsystemDescriptor");
