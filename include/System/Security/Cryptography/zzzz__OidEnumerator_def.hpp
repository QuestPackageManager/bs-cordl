#pragma once
// IWYU pragma private; include "System/Security/Cryptography/OidEnumerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(OidEnumerator)
namespace System::Security::Cryptography {
class OidCollection;
}
namespace System::Security::Cryptography {
class Oid;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Cryptography {
class OidEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::OidEnumerator);
// Dependencies System.Collections.IEnumerator, System.Object
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: System.Security.Cryptography.OidEnumerator
class CORDL_TYPE OidEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Security::Cryptography::Oid* Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field _current, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__current, put = __cordl_internal_set__current)) int32_t _current;

  /// @brief Field _oids, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__oids, put = __cordl_internal_set__oids)) ::System::Security::Cryptography::OidCollection* _oids;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x443036c, size 0x4c, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Security::Cryptography::OidEnumerator* New_ctor(::System::Security::Cryptography::OidCollection* oids);

  /// @brief Method Reset, addr 0x44303b8, size 0xc, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x4430368, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr int32_t const& __cordl_internal_get__current() const;

  constexpr int32_t& __cordl_internal_get__current();

  constexpr ::System::Security::Cryptography::OidCollection* const& __cordl_internal_get__oids() const;

  constexpr ::System::Security::Cryptography::OidCollection*& __cordl_internal_get__oids();

  constexpr void __cordl_internal_set__current(int32_t value);

  constexpr void __cordl_internal_set__oids(::System::Security::Cryptography::OidCollection* value);

  /// @brief Method .ctor, addr 0x443015c, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::OidCollection* oids);

  /// @brief Method get_Current, addr 0x4430348, size 0x20, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::Oid* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OidEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OidEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OidEnumerator(OidEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OidEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OidEnumerator(OidEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9295 };

  /// @brief Field _oids, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::OidCollection* ____oids;

  /// @brief Field _current, offset: 0x18, size: 0x4, def value: None
  int32_t ____current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Cryptography::OidEnumerator, ____oids) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::OidEnumerator, ____current) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::OidEnumerator, 0x20>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::OidEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::OidEnumerator*, "System.Security.Cryptography", "OidEnumerator");
