#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AceEnumerator)
namespace System::Collections {
class IEnumerator;
}
namespace System::Security::AccessControl {
class GenericAce;
}
namespace System::Security::AccessControl {
class GenericAcl;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::AccessControl {
class AceEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::AceEnumerator);
// Type: System.Security.AccessControl::AceEnumerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3016))
// CS Name: ::System.Security.AccessControl::AceEnumerator*
class CORDL_TYPE AceEnumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field owner, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_owner, put = __cordl_internal_set_owner))::System::Security::AccessControl::GenericAcl* owner;

  /// @brief Field current, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_current, put = __cordl_internal_set_current)) int32_t current;

  __declspec(property(get = get_Current))::System::Security::AccessControl::GenericAce* Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  constexpr ::System::Security::AccessControl::GenericAcl*& __cordl_internal_get_owner();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::AccessControl::GenericAcl*> const& __cordl_internal_get_owner() const;

  constexpr void __cordl_internal_set_owner(::System::Security::AccessControl::GenericAcl* value);

  constexpr int32_t& __cordl_internal_get_current();

  constexpr int32_t const& __cordl_internal_get_current() const;

  constexpr void __cordl_internal_set_current(int32_t value);

  static inline ::System::Security::AccessControl::AceEnumerator* New_ctor(::System::Security::AccessControl::GenericAcl* owner);

  /// @brief Method .ctor, addr 0x2480914, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::AccessControl::GenericAcl* owner);

  /// @brief Method get_Current, addr 0x2480944, size 0x34, virtual false, abstract: false, final false
  inline ::System::Security::AccessControl::GenericAce* get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2480978, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method MoveNext, addr 0x248097c, size 0x58, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method Reset, addr 0x24809d4, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "AceEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AceEnumerator(AceEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AceEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AceEnumerator(AceEnumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AceEnumerator();

public:
  /// @brief Field owner, offset: 0x10, size: 0x8, def value: None
  ::System::Security::AccessControl::GenericAcl* ___owner;

  /// @brief Field current, offset: 0x18, size: 0x4, def value: None
  int32_t ___current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::AceEnumerator, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Security::AccessControl::AceEnumerator, ___owner) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::AccessControl::AceEnumerator, ___current) == 0x18, "Offset mismatch!");

} // namespace System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::AceEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::AceEnumerator*, "System.Security.AccessControl", "AceEnumerator");
