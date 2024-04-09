#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(X509ChainElementEnumerator)
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainElement;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509ChainElementEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator);
// Type: System.Security.Cryptography.X509Certificates::X509ChainElementEnumerator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// CS Name: ::System.Security.Cryptography.X509Certificates::X509ChainElementEnumerator*
class CORDL_TYPE X509ChainElementEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current))::System::Security::Cryptography::X509Certificates::X509ChainElement* Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field enumerator, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_enumerator, put = __cordl_internal_set_enumerator))::System::Collections::IEnumerator* enumerator;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x2eb2000, size 0xa0, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator* New_ctor(::System::Collections::IEnumerable* enumerable);

  /// @brief Method Reset, addr 0x2eb20a0, size 0xa4, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2eb1f5c, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr ::System::Collections::IEnumerator*& __cordl_internal_get_enumerator();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IEnumerator*> const& __cordl_internal_get_enumerator() const;

  constexpr void __cordl_internal_set_enumerator(::System::Collections::IEnumerator* value);

  /// @brief Method .ctor, addr 0x2eb1b9c, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IEnumerable* enumerable);

  /// @brief Method get_Current, addr 0x2eb1e6c, size 0xf0, virtual false, abstract: false, final false
  inline ::System::Security::Cryptography::X509Certificates::X509ChainElement* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509ChainElementEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "X509ChainElementEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509ChainElementEnumerator(X509ChainElementEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509ChainElementEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509ChainElementEnumerator(X509ChainElementEnumerator const&) = delete;

  /// @brief Field enumerator, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IEnumerator* ___enumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator, ___enumerator) == 0x10, "Offset mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509ChainElementEnumerator*, "System.Security.Cryptography.X509Certificates", "X509ChainElementEnumerator");
