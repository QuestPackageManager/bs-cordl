#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace System::Security::Cryptography {
class OidEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::OidEnumerator);
// Type: System.Security.Cryptography::OidEnumerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8974))
// CS Name: ::System.Security.Cryptography::OidEnumerator*
class CORDL_TYPE OidEnumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _oids, offset 0x10, size 0x8
  __declspec(property(get = __get__oids, put = __set__oids))::System::Security::Cryptography::OidCollection* _oids;

  /// @brief Field _current, offset 0x18, size 0x4
  __declspec(property(get = __get__current, put = __set__current)) int32_t _current;

  __declspec(property(get = get_Current))::System::Security::Cryptography::Oid* Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr ::System::Security::Cryptography::OidCollection*& __get__oids();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::OidCollection*> const& __get__oids() const;

  constexpr void __set__oids(::System::Security::Cryptography::OidCollection* value);

  constexpr int32_t& __get__current();

  constexpr int32_t const& __get__current() const;

  constexpr void __set__current(int32_t value);

  static inline ::System::Security::Cryptography::OidEnumerator* New_ctor(::System::Security::Cryptography::OidCollection* oids);

  /// @brief Method .ctor addr 0x29760d0 size 0x30 virtual false final false
  inline void _ctor(::System::Security::Cryptography::OidCollection* oids);

  /// @brief Method get_Current addr 0x29762cc size 0x20 virtual false final false
  inline ::System::Security::Cryptography::Oid* get_Current();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x29762ec size 0x4 virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method MoveNext addr 0x29762f0 size 0x50 virtual true final true
  inline bool MoveNext();

  /// @brief Method Reset addr 0x2976340 size 0xc virtual true final true
  inline void Reset();

  // Ctor Parameters [CppParam { name: "", ty: "OidEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OidEnumerator(OidEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OidEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OidEnumerator(OidEnumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OidEnumerator();

public:
  /// @brief Field _oids, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::OidCollection* ____oids;

  /// @brief Field _current, offset: 0x18, size: 0x4, def value: None
  int32_t ____current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::OidEnumerator, 0x20>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::OidEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::OidEnumerator*, "System.Security.Cryptography", "OidEnumerator");
