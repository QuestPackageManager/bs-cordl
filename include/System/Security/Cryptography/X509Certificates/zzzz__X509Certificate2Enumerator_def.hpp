#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(X509Certificate2Enumerator)
namespace System::Collections {
class IEnumerator;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Collection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Enumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator);
// Type: System.Security.Cryptography.X509Certificates::X509Certificate2Enumerator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8995))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509Certificate2Enumerator*
class CORDL_TYPE X509Certificate2Enumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field enumerator, offset 0x10, size 0x8
  __declspec(property(get = __get_enumerator, put = __set_enumerator))::System::Collections::IEnumerator* enumerator;

  __declspec(property(get = get_Current))::System::Security::Cryptography::X509Certificates::X509Certificate2* Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr ::System::Collections::IEnumerator*& __get_enumerator();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& __get_enumerator() const;

  constexpr void __set_enumerator(::System::Collections::IEnumerator* value);

  static inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator* New_ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* collection);

  /// @brief Method .ctor, addr 0x297cd48, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* collection);

  /// @brief Method get_Current, addr 0x297ceb0, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509Certificate2* get_Current();

  /// @brief Method MoveNext, addr 0x297cfa0, size 0xa0, virtual false, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x297d040, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.IEnumerator.MoveNext, addr 0x297d0e4, size 0xa0, virtual true, abstract: false, final true
  inline bool System_Collections_IEnumerator_MoveNext();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x297d184, size 0xa4, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  // Ctor Parameters [CppParam { name: "", ty: "X509Certificate2Enumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Certificate2Enumerator(X509Certificate2Enumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Certificate2Enumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Certificate2Enumerator(X509Certificate2Enumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Certificate2Enumerator();

public:
  /// @brief Field enumerator, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IEnumerator* ___enumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator, ___enumerator) == 0x10, "Offset mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator*, "System.Security.Cryptography.X509Certificates", "X509Certificate2Enumerator");
