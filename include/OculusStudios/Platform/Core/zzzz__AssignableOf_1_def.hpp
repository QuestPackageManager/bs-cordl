#pragma once
// IWYU pragma private; include "OculusStudios/Platform/Core/AssignableOf_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssignableOf_1)
namespace System {
class Type;
}
// Forward declare root types
namespace OculusStudios::Platform::Core {
template <typename TBase> class AssignableOf_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::OculusStudios::Platform::Core::AssignableOf_1);
// Dependencies System.Object
namespace OculusStudios::Platform::Core {
// cpp template
template <typename TBase>
// Is value type: false
// CS Name: OculusStudios.Platform.Core.AssignableOf`1<TBase>
class CORDL_TYPE AssignableOf_1 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_name)) ::StringW name;

  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  static inline ::OculusStudios::Platform::Core::AssignableOf_1<TBase>* New_ctor(::System::Type* type);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type);

  /// @brief Method get_name, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::OculusStudios::Platform::Core::AssignableOf_1<TBase>* op_Implicit___OculusStudios__Platform__Core__AssignableOf_1_TBase__(::System::Type* obj);

  /// @brief Method op_Implicit, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Type* op_Implicit___System__Type_(::OculusStudios::Platform::Core::AssignableOf_1<TBase>* wrapper);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssignableOf_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AssignableOf_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssignableOf_1(AssignableOf_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssignableOf_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssignableOf_1(AssignableOf_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22184 };

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace OculusStudios::Platform::Core
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::OculusStudios::Platform::Core::AssignableOf_1, "OculusStudios.Platform.Core", "AssignableOf`1");
