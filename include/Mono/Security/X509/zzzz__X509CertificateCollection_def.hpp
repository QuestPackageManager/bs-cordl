#pragma once
// IWYU pragma private; include "Mono/Security/X509/X509CertificateCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__CollectionBase_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509CertificateCollection)
namespace Mono::Security::X509 {
class X509CertificateCollection_X509CertificateEnumerator;
}
namespace Mono::Security::X509 {
class X509Certificate;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X509CertificateCollection;
}
namespace Mono::Security::X509 {
class X509CertificateCollection_X509CertificateEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::X509::X509CertificateCollection);
MARK_REF_PTR_T(::Mono::Security::X509::X509CertificateCollection_X509CertificateEnumerator);
// Dependencies System.Collections.IEnumerator, System.Object
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator
class CORDL_TYPE X509CertificateCollection_X509CertificateEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::Mono::Security::X509::X509Certificate* Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field enumerator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_enumerator, put = __cordl_internal_set_enumerator)) ::System::Collections::IEnumerator* enumerator;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x3c38a78, size 0xa0, virtual false, abstract: false, final false
  inline bool MoveNext();

  static inline ::Mono::Security::X509::X509CertificateCollection_X509CertificateEnumerator* New_ctor(::Mono::Security::X509::X509CertificateCollection* mappings);

  /// @brief Method System.Collections.IEnumerator.MoveNext, addr 0x3c40f40, size 0xa0, virtual true, abstract: false, final true
  inline bool System_Collections_IEnumerator_MoveNext();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x3c40fe0, size 0xa4, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3c40e9c, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get_enumerator() const;

  constexpr ::System::Collections::IEnumerator*& __cordl_internal_get_enumerator();

  constexpr void __cordl_internal_set_enumerator(::System::Collections::IEnumerator* value);

  /// @brief Method .ctor, addr 0x3c40d14, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::Mono::Security::X509::X509CertificateCollection* mappings);

  /// @brief Method get_Current, addr 0x3c386f0, size 0xf0, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509Certificate* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CertificateCollection_X509CertificateEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateCollection_X509CertificateEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CertificateCollection_X509CertificateEnumerator(X509CertificateCollection_X509CertificateEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateCollection_X509CertificateEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CertificateCollection_X509CertificateEnumerator(X509CertificateCollection_X509CertificateEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15926 };

  /// @brief Field enumerator, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IEnumerator* ___enumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::X509::X509CertificateCollection_X509CertificateEnumerator, ___enumerator) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::X509CertificateCollection_X509CertificateEnumerator, 0x18>, "Size mismatch!");

} // namespace Mono::Security::X509
// Dependencies System.Collections.CollectionBase, System.Collections.IEnumerable
namespace Mono::Security::X509 {
// Is value type: false
// CS Name: Mono.Security.X509.X509CertificateCollection
class CORDL_TYPE X509CertificateCollection : public ::System::Collections::CollectionBase {
public:
  // Declarations
  using X509CertificateEnumerator = ::Mono::Security::X509::X509CertificateCollection_X509CertificateEnumerator;

  __declspec(property(get = get_Item)) ::Mono::Security::X509::X509Certificate* Item[];

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Method Add, addr 0x3c3506c, size 0x70, virtual false, abstract: false, final false
  inline int32_t Add(::Mono::Security::X509::X509Certificate* value);

  /// @brief Method AddRange, addr 0x3c40ae4, size 0xd0, virtual false, abstract: false, final false
  inline void AddRange(::Mono::Security::X509::X509CertificateCollection* value);

  /// @brief Method Compare, addr 0x3c40e0c, size 0x90, virtual false, abstract: false, final false
  inline bool Compare(::ArrayW<uint8_t, ::Array<uint8_t>*> array1, ::ArrayW<uint8_t, ::Array<uint8_t>*> array2);

  /// @brief Method Contains, addr 0x3c40bb4, size 0x18, virtual false, abstract: false, final false
  inline bool Contains(::Mono::Security::X509::X509Certificate* value);

  /// @brief Method GetEnumerator, addr 0x3c38698, size 0x58, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509CertificateCollection_X509CertificateEnumerator* GetEnumerator();

  /// @brief Method GetHashCode, addr 0x3c40dec, size 0x20, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IndexOf, addr 0x3c40bcc, size 0x148, virtual false, abstract: false, final false
  inline int32_t IndexOf(::Mono::Security::X509::X509Certificate* value);

  static inline ::Mono::Security::X509::X509CertificateCollection* New_ctor();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x3c40dc8, size 0x24, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method .ctor, addr 0x3c34ed8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Item, addr 0x3c40a4c, size 0x98, virtual false, abstract: false, final false
  inline ::Mono::Security::X509::X509Certificate* get_Item(int32_t index);

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509CertificateCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509CertificateCollection(X509CertificateCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509CertificateCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509CertificateCollection(X509CertificateCollection const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15927 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::X509CertificateCollection, 0x18>, "Size mismatch!");

} // namespace Mono::Security::X509
NEED_NO_BOX(::Mono::Security::X509::X509CertificateCollection);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509CertificateCollection*, "Mono.Security.X509", "X509CertificateCollection");
NEED_NO_BOX(::Mono::Security::X509::X509CertificateCollection_X509CertificateEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509CertificateCollection_X509CertificateEnumerator*, "Mono.Security.X509", "X509CertificateCollection/X509CertificateEnumerator");
