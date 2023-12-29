#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Internal/Cryptography/Pal/zzzz__CertificateData_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CertificateData)
namespace System::Security::Cryptography {
class DerSequenceReader;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace System::Security::Cryptography::X509Certificates {
class X500DistinguishedName;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
class IDisposable;
}
namespace System {
struct DateTime;
}
namespace Internal::Cryptography::Pal {
struct __CertificateData__AlgorithmIdentifier;
}
namespace Internal::Cryptography::Pal {
class __CertificateData___ReadReverseRdns_d__21;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Extension;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509NameType;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Internal::Cryptography::Pal {
struct GeneralNameType;
}
// Forward declare root types
namespace Internal::Cryptography::Pal {
class __CertificateData___ReadReverseRdns_d__21;
}
namespace Internal::Cryptography::Pal {
struct CertificateData;
}
namespace Internal::Cryptography::Pal {
struct __CertificateData__AlgorithmIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21);
MARK_VAL_T(::Internal::Cryptography::Pal::CertificateData);
MARK_VAL_T(::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier);
// Type: ::AlgorithmIdentifier
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Internal::Cryptography::Pal {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7693))
// CS Name: ::CertificateData::AlgorithmIdentifier
struct CORDL_TYPE __CertificateData__AlgorithmIdentifier {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "AlgorithmId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Parameters", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "",
  // def_value: None }]
  constexpr __CertificateData__AlgorithmIdentifier(::StringW AlgorithmId, ::ArrayW<uint8_t, ::Array<uint8_t>*> Parameters) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __CertificateData__AlgorithmIdentifier();

  /// @brief Field AlgorithmId, offset: 0x0, size: 0x8, def value: None
  ::StringW AlgorithmId;

  /// @brief Field Parameters, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> Parameters;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier, 0x10>, "Size mismatch!");

static_assert(offsetof(::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier, AlgorithmId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier, Parameters) == 0x8, "Offset mismatch!");

} // namespace Internal::Cryptography::Pal
// Type: ::<ReadReverseRdns>d__21
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Internal::Cryptography::Pal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3829)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3829), inst: 600 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2611))} Self: TypeDefinitionIndex(TypeDefinitionIndex(7694)) CS Name: ::CertificateData::<ReadReverseRdns>d__21*
class CORDL_TYPE __CertificateData___ReadReverseRdns_d__21 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __get___1__state, put = __set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x10
  __declspec(property(get = __get___2__current, put = __set___2__current))::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x28, size 0x4
  __declspec(property(get = __get___l__initialThreadId, put = __set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field name, offset 0x30, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::System::Security::Cryptography::X509Certificates::X500DistinguishedName* name;

  /// @brief Field <>3__name, offset 0x38, size 0x8
  __declspec(property(get = __get___3__name, put = __set___3__name))::System::Security::Cryptography::X509Certificates::X500DistinguishedName* __3__name;

  /// @brief Field <rdnReaders>5__2, offset 0x40, size 0x8
  __declspec(property(get = __get__rdnReaders_5__2, put = __set__rdnReaders_5__2))::System::Collections::Generic::Stack_1<::System::Security::Cryptography::DerSequenceReader*>* _rdnReaders_5__2;

  /// @brief Field <rdnReader>5__3, offset 0x48, size 0x8
  __declspec(property(get = __get__rdnReader_5__3, put = __set__rdnReader_5__3))::System::Security::Cryptography::DerSequenceReader* _rdnReader_5__3;

  __declspec(property(get = System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_String___get_Current))::System::Collections::Generic::KeyValuePair_2<
      ::StringW, ::StringW> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_String___Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  constexpr int32_t& __get___1__state();

  constexpr int32_t const& __get___1__state() const;

  constexpr void __set___1__state(int32_t value);

  constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>& __get___2__current();

  constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> const& __get___2__current() const;

  constexpr void __set___2__current(::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> value);

  constexpr int32_t& __get___l__initialThreadId();

  constexpr int32_t const& __get___l__initialThreadId() const;

  constexpr void __set___l__initialThreadId(int32_t value);

  constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedName*& __get_name();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*> const& __get_name() const;

  constexpr void __set_name(::System::Security::Cryptography::X509Certificates::X500DistinguishedName* value);

  constexpr ::System::Security::Cryptography::X509Certificates::X500DistinguishedName*& __get___3__name();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X500DistinguishedName*> const& __get___3__name() const;

  constexpr void __set___3__name(::System::Security::Cryptography::X509Certificates::X500DistinguishedName* value);

  constexpr ::System::Collections::Generic::Stack_1<::System::Security::Cryptography::DerSequenceReader*>*& __get__rdnReaders_5__2();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::System::Security::Cryptography::DerSequenceReader*>*> const& __get__rdnReaders_5__2() const;

  constexpr void __set__rdnReaders_5__2(::System::Collections::Generic::Stack_1<::System::Security::Cryptography::DerSequenceReader*>* value);

  constexpr ::System::Security::Cryptography::DerSequenceReader*& __get__rdnReader_5__3();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DerSequenceReader*> const& __get__rdnReader_5__3() const;

  constexpr void __set__rdnReader_5__3(::System::Security::Cryptography::DerSequenceReader* value);

  static inline ::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21* New_ctor(int32_t __1__state);

  /// @brief Method .ctor addr 0x26af42c size 0x34 virtual false final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose addr 0x26af460 size 0x4 virtual true final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext addr 0x26af464 size 0x294 virtual true final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.String>>.get_Current addr 0x26af6f8 size 0xc virtual true final true
  inline ::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>
  System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_String___get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset addr 0x26af704 size 0x40 virtual true final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current addr 0x26af744 size 0x5c virtual true final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.String>>.GetEnumerator addr 0x26af7a0 size 0xa4 virtual true final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*
  System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String_System_String___GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x26af844 size 0x4 virtual true final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__CertificateData___ReadReverseRdns_d__21", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __CertificateData___ReadReverseRdns_d__21(__CertificateData___ReadReverseRdns_d__21&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__CertificateData___ReadReverseRdns_d__21", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __CertificateData___ReadReverseRdns_d__21(__CertificateData___ReadReverseRdns_d__21 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __CertificateData___ReadReverseRdns_d__21();

public:
  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
  ::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW> _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field name, offset: 0x30, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* ___name;

  /// @brief Field <>3__name, offset: 0x38, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* _____3__name;

  /// @brief Field <rdnReaders>5__2, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::System::Security::Cryptography::DerSequenceReader*>* ____rdnReaders_5__2;

  /// @brief Field <rdnReader>5__3, offset: 0x48, size: 0x8, def value: None
  ::System::Security::Cryptography::DerSequenceReader* ____rdnReader_5__3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21, 0x50>, "Size mismatch!");

static_assert(offsetof(::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21, ___name) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21, _____3__name) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21, ____rdnReaders_5__2) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21, ____rdnReader_5__3) == 0x48, "Offset mismatch!");

} // namespace Internal::Cryptography::Pal
// Type: Internal.Cryptography.Pal::CertificateData
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Internal::Cryptography::Pal {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7693)), TypeDefinitionIndex(TypeDefinitionIndex(2368))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7695))
// CS Name: ::Internal.Cryptography.Pal::CertificateData
struct CORDL_TYPE CertificateData {
public:
  // Declarations
  using _ReadReverseRdns_d__21 = ::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21;

  using AlgorithmIdentifier = ::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier;

  /// @brief Method .ctor addr 0x26ae03c size 0x718 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> rawData);

  /// @brief Method GetNameInfo addr 0x26ae754 size 0x640 virtual false final false
  inline ::StringW GetNameInfo(::System::Security::Cryptography::X509Certificates::X509NameType nameType, bool forIssuer);

  /// @brief Method GetSimpleNameInfo addr 0x26aed94 size 0x45c virtual false final false
  static inline ::StringW GetSimpleNameInfo(::System::Security::Cryptography::X509Certificates::X500DistinguishedName* name);

  /// @brief Method FindAltNameMatch addr 0x26af1f0 size 0x1c4 virtual false final false
  static inline ::StringW FindAltNameMatch(::ArrayW<uint8_t, ::Array<uint8_t>*> extensionBytes, ::Internal::Cryptography::Pal::GeneralNameType matchType, ::StringW otherOid);

  /// @brief Method ReadReverseRdns addr 0x26af3b4 size 0x78 virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::StringW>>*
  ReadReverseRdns(::System::Security::Cryptography::X509Certificates::X500DistinguishedName* name);

  // Ctor Parameters [CppParam { name: "RawData", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "SubjectPublicKeyInfo", ty:
  // "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "Version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SerialNumber", ty:
  // "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "TbsSignature", ty: "::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier", modifiers:
  // "", def_value: None }, CppParam { name: "Issuer", ty: "::System::Security::Cryptography::X509Certificates::X500DistinguishedName*", modifiers: "", def_value: None }, CppParam { name: "NotBefore",
  // ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "NotAfter", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "Subject", ty:
  // "::System::Security::Cryptography::X509Certificates::X500DistinguishedName*", modifiers: "", def_value: None }, CppParam { name: "PublicKeyAlgorithm", ty:
  // "::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "PublicKey", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "",
  // def_value: None }, CppParam { name: "IssuerUniqueId", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "SubjectUniqueId", ty:
  // "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "Extensions", ty:
  // "::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509Extension*>*", modifiers: "", def_value: None }, CppParam { name: "SignatureAlgorithm", ty:
  // "::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "SignatureValue", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers:
  // "", def_value: None }]
  constexpr CertificateData(::ArrayW<uint8_t, ::Array<uint8_t>*> RawData, ::ArrayW<uint8_t, ::Array<uint8_t>*> SubjectPublicKeyInfo, int32_t Version, ::ArrayW<uint8_t, ::Array<uint8_t>*> SerialNumber,
                            ::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier TbsSignature, ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* Issuer,
                            ::System::DateTime NotBefore, ::System::DateTime NotAfter, ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* Subject,
                            ::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier PublicKeyAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> PublicKey,
                            ::ArrayW<uint8_t, ::Array<uint8_t>*> IssuerUniqueId, ::ArrayW<uint8_t, ::Array<uint8_t>*> SubjectUniqueId,
                            ::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509Extension*>* Extensions,
                            ::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier SignatureAlgorithm, ::ArrayW<uint8_t, ::Array<uint8_t>*> SignatureValue) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr CertificateData();

  /// @brief Field RawData, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> RawData;

  /// @brief Field SubjectPublicKeyInfo, offset: 0x8, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> SubjectPublicKeyInfo;

  /// @brief Field Version, offset: 0x10, size: 0x4, def value: None
  int32_t Version;

  /// @brief Field SerialNumber, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> SerialNumber;

  /// @brief Field TbsSignature, offset: 0x20, size: 0x10, def value: None
  ::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier TbsSignature;

  /// @brief Field Issuer, offset: 0x30, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* Issuer;

  /// @brief Field NotBefore, offset: 0x38, size: 0x8, def value: None
  ::System::DateTime NotBefore;

  /// @brief Field NotAfter, offset: 0x40, size: 0x8, def value: None
  ::System::DateTime NotAfter;

  /// @brief Field Subject, offset: 0x48, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X500DistinguishedName* Subject;

  /// @brief Field PublicKeyAlgorithm, offset: 0x50, size: 0x10, def value: None
  ::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier PublicKeyAlgorithm;

  /// @brief Field PublicKey, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> PublicKey;

  /// @brief Field IssuerUniqueId, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> IssuerUniqueId;

  /// @brief Field SubjectUniqueId, offset: 0x70, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> SubjectUniqueId;

  /// @brief Field Extensions, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509Extension*>* Extensions;

  /// @brief Field SignatureAlgorithm, offset: 0x80, size: 0x10, def value: None
  ::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier SignatureAlgorithm;

  /// @brief Field SignatureValue, offset: 0x90, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> SignatureValue;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x98 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Internal::Cryptography::Pal::CertificateData, 0x98>, "Size mismatch!");

static_assert(offsetof(::Internal::Cryptography::Pal::CertificateData, RawData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Internal::Cryptography::Pal::CertificateData, SubjectPublicKeyInfo) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Internal::Cryptography::Pal::CertificateData, Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Internal::Cryptography::Pal::CertificateData, SerialNumber) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Internal::Cryptography::Pal::CertificateData, TbsSignature) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Internal::Cryptography::Pal::CertificateData, Issuer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Internal::Cryptography::Pal::CertificateData, NotBefore) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Internal::Cryptography::Pal::CertificateData, NotAfter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Internal::Cryptography::Pal::CertificateData, Subject) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Internal::Cryptography::Pal::CertificateData, PublicKeyAlgorithm) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Internal::Cryptography::Pal::CertificateData, PublicKey) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Internal::Cryptography::Pal::CertificateData, IssuerUniqueId) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Internal::Cryptography::Pal::CertificateData, SubjectUniqueId) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Internal::Cryptography::Pal::CertificateData, Extensions) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Internal::Cryptography::Pal::CertificateData, SignatureAlgorithm) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Internal::Cryptography::Pal::CertificateData, SignatureValue) == 0x90, "Offset mismatch!");

} // namespace Internal::Cryptography::Pal
NEED_NO_BOX(::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21);
DEFINE_IL2CPP_ARG_TYPE(::Internal::Cryptography::Pal::__CertificateData___ReadReverseRdns_d__21*, "Internal.Cryptography.Pal", "CertificateData/<ReadReverseRdns>d__21");
DEFINE_IL2CPP_ARG_TYPE(::Internal::Cryptography::Pal::CertificateData, "Internal.Cryptography.Pal", "CertificateData");
DEFINE_IL2CPP_ARG_TYPE(::Internal::Cryptography::Pal::__CertificateData__AlgorithmIdentifier, "Internal.Cryptography.Pal", "CertificateData/AlgorithmIdentifier");
