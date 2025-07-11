#pragma once
// IWYU pragma private; include "System/Security/Principal/SecurityIdentifier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Principal/zzzz__IdentityReference_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecurityIdentifier)
namespace System::Security::Principal {
class IdentityReference;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Security::Principal {
class SecurityIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Principal::SecurityIdentifier);
// Dependencies System.IComparable`1<T>, System.Security.Principal.IdentityReference
namespace System::Security::Principal {
// Is value type: false
// CS Name: System.Security.Principal.SecurityIdentifier
class CORDL_TYPE SecurityIdentifier : public ::System::Security::Principal::IdentityReference {
public:
  // Declarations
  __declspec(property(get = get_BinaryLength)) int32_t BinaryLength;

  /// @brief Field MaxBinaryLength, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_MaxBinaryLength, put = setStaticF_MaxBinaryLength)) int32_t MaxBinaryLength;

  /// @brief Field MinBinaryLength, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_MinBinaryLength, put = setStaticF_MinBinaryLength)) int32_t MinBinaryLength;

  __declspec(property(get = get_Value)) ::StringW Value;

  /// @brief Field buffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Convert operator to "::System::IComparable_1<::System::Security::Principal::SecurityIdentifier*>"
  constexpr operator ::System::IComparable_1<::System::Security::Principal::SecurityIdentifier*>*() noexcept;

  /// @brief Method CompareTo, addr 0x3cba148, size 0x168, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Security::Principal::SecurityIdentifier* sid);

  /// @brief Method CreateFromBinaryForm, addr 0x3cb9ce8, size 0x160, virtual false, abstract: false, final false
  inline void CreateFromBinaryForm(::System::IntPtr binaryForm, int32_t length);

  /// @brief Method Equals, addr 0x3cba318, size 0x64, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x3cba37c, size 0xa8, virtual false, abstract: false, final false
  inline bool Equals(::System::Security::Principal::SecurityIdentifier* sid);

  /// @brief Method GetBinaryForm, addr 0x3cba424, size 0xc0, virtual false, abstract: false, final false
  inline void GetBinaryForm(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  /// @brief Method GetHashCode, addr 0x3cba4e4, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetSidAuthority, addr 0x3cba020, size 0x80, virtual false, abstract: false, final false
  inline uint64_t GetSidAuthority();

  /// @brief Method GetSidSubAuthority, addr 0x3cba0a0, size 0x7c, virtual false, abstract: false, final false
  inline uint32_t GetSidSubAuthority(uint8_t index);

  /// @brief Method GetSidSubAuthorityCount, addr 0x3cba11c, size 0x2c, virtual false, abstract: false, final false
  inline uint8_t GetSidSubAuthorityCount();

  static inline ::System::Security::Principal::SecurityIdentifier* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  static inline ::System::Security::Principal::SecurityIdentifier* New_ctor(::StringW sddlForm);

  /// @brief Method ParseSddlForm, addr 0x3cb97c4, size 0x440, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ParseSddlForm(::StringW sddlForm);

  /// @brief Method ToString, addr 0x3cba50c, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Translate, addr 0x3cba518, size 0x218, virtual true, abstract: false, final false
  inline ::System::Security::Principal::IdentityReference* Translate(::System::Type* targetType);

  /// @brief Method TryParseAuthority, addr 0x3cba8b0, size 0xe0, virtual false, abstract: false, final false
  static inline bool TryParseAuthority(::StringW s, ::ByRef<uint64_t> result);

  /// @brief Method TryParseSubAuthority, addr 0x3cba990, size 0xe0, virtual false, abstract: false, final false
  static inline bool TryParseSubAuthority(::StringW s, ::ByRef<uint32_t> result);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buffer();

  constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x3cb9c04, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  /// @brief Method .ctor, addr 0x3cb970c, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::StringW sddlForm);

  static inline int32_t getStaticF_MaxBinaryLength();

  static inline int32_t getStaticF_MinBinaryLength();

  /// @brief Method get_BinaryLength, addr 0x3cb9e48, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_BinaryLength();

  /// @brief Method get_Value, addr 0x3cb9e64, size 0x1bc, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Convert to "::System::IComparable_1<::System::Security::Principal::SecurityIdentifier*>"
  constexpr ::System::IComparable_1<::System::Security::Principal::SecurityIdentifier*>* i___System__IComparable_1___System__Security__Principal__SecurityIdentifier__() noexcept;

  /// @brief Method op_Equality, addr 0x3cba2b0, size 0x68, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Security::Principal::SecurityIdentifier* left, ::System::Security::Principal::SecurityIdentifier* right);

  static inline void setStaticF_MaxBinaryLength(int32_t value);

  static inline void setStaticF_MinBinaryLength(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecurityIdentifier();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SecurityIdentifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecurityIdentifier(SecurityIdentifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecurityIdentifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecurityIdentifier(SecurityIdentifier const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3001 };

  /// @brief Field buffer, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Security::Principal::SecurityIdentifier, ___buffer) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Security::Principal::SecurityIdentifier, 0x18>, "Size mismatch!");

} // namespace System::Security::Principal
NEED_NO_BOX(::System::Security::Principal::SecurityIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::SecurityIdentifier*, "System.Security.Principal", "SecurityIdentifier");
