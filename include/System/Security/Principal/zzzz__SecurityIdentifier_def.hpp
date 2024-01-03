#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Principal/zzzz__IdentityReference_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecurityIdentifier)
namespace System {
class Type;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
class Object;
}
namespace System::Security::Principal {
class IdentityReference;
}
// Forward declare root types
namespace System::Security::Principal {
class SecurityIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Principal::SecurityIdentifier);
// Type: System.Security.Principal::SecurityIdentifier
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Principal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3000))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3002))
// CS Name: ::System.Security.Principal::SecurityIdentifier*
class CORDL_TYPE SecurityIdentifier : public ::System::Security::Principal::IdentityReference {
public:
  // Declarations
  /// @brief Field buffer, offset 0x10, size 0x8
  __declspec(property(get = __get_buffer, put = __set_buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field MaxBinaryLength, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MaxBinaryLength, put = setStaticF_MaxBinaryLength)) int32_t MaxBinaryLength;

  /// @brief Field MinBinaryLength, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_MinBinaryLength, put = setStaticF_MinBinaryLength)) int32_t MinBinaryLength;

  __declspec(property(get = get_BinaryLength)) int32_t BinaryLength;

  __declspec(property(get = get_Value))::StringW Value;

  /// @brief Convert operator to "::System::IComparable_1<::System::Security::Principal::SecurityIdentifier*>"
  constexpr operator ::System::IComparable_1<::System::Security::Principal::SecurityIdentifier*>*() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_buffer() const;

  constexpr void __set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_MaxBinaryLength(int32_t value);

  static inline int32_t getStaticF_MaxBinaryLength();

  static inline void setStaticF_MinBinaryLength(int32_t value);

  static inline int32_t getStaticF_MinBinaryLength();

  static inline ::System::Security::Principal::SecurityIdentifier* New_ctor(::StringW sddlForm);

  /// @brief Method .ctor, addr 0x24773a4, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::StringW sddlForm);

  static inline ::System::Security::Principal::SecurityIdentifier* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  /// @brief Method .ctor, addr 0x24778c0, size 0xec, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  /// @brief Method CreateFromBinaryForm, addr 0x24779ac, size 0x168, virtual false, abstract: false, final false
  inline void CreateFromBinaryForm(void* binaryForm, int32_t length);

  /// @brief Method get_BinaryLength, addr 0x2477b14, size 0x1c, virtual false, abstract: false, final false
  inline int32_t get_BinaryLength();

  /// @brief Method get_Value, addr 0x2477b30, size 0x1bc, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method GetSidAuthority, addr 0x2477cec, size 0x80, virtual false, abstract: false, final false
  inline uint64_t GetSidAuthority();

  /// @brief Method GetSidSubAuthorityCount, addr 0x2477de8, size 0x2c, virtual false, abstract: false, final false
  inline uint8_t GetSidSubAuthorityCount();

  /// @brief Method GetSidSubAuthority, addr 0x2477d6c, size 0x7c, virtual false, abstract: false, final false
  inline uint32_t GetSidSubAuthority(uint8_t index);

  /// @brief Method CompareTo, addr 0x2477e14, size 0x170, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Security::Principal::SecurityIdentifier* sid);

  /// @brief Method Equals, addr 0x2477fec, size 0x64, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Equals, addr 0x2478050, size 0xa8, virtual false, abstract: false, final false
  inline bool Equals(::System::Security::Principal::SecurityIdentifier* sid);

  /// @brief Method GetBinaryForm, addr 0x24780f8, size 0xc8, virtual false, abstract: false, final false
  inline void GetBinaryForm(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset);

  /// @brief Method GetHashCode, addr 0x24781c0, size 0x28, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x24781e8, size 0xc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Translate, addr 0x24781f4, size 0x22c, virtual true, abstract: false, final false
  inline ::System::Security::Principal::IdentityReference* Translate(::System::Type* targetType);

  /// @brief Method op_Equality, addr 0x2477f84, size 0x68, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Security::Principal::SecurityIdentifier* left, ::System::Security::Principal::SecurityIdentifier* right);

  /// @brief Method ParseSddlForm, addr 0x2477460, size 0x460, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ParseSddlForm(::StringW sddlForm);

  /// @brief Method TryParseAuthority, addr 0x24785a0, size 0xd8, virtual false, abstract: false, final false
  static inline bool TryParseAuthority(::StringW s, ByRef<uint64_t> result);

  /// @brief Method TryParseSubAuthority, addr 0x2478678, size 0xd8, virtual false, abstract: false, final false
  static inline bool TryParseSubAuthority(::StringW s, ByRef<uint32_t> result);

  // Ctor Parameters [CppParam { name: "", ty: "SecurityIdentifier", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecurityIdentifier(SecurityIdentifier&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecurityIdentifier", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecurityIdentifier(SecurityIdentifier const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecurityIdentifier();

public:
  /// @brief Field buffer, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Principal::SecurityIdentifier, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Security::Principal::SecurityIdentifier, ___buffer) == 0x10, "Offset mismatch!");

} // namespace System::Security::Principal
NEED_NO_BOX(::System::Security::Principal::SecurityIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::SecurityIdentifier*, "System.Security.Principal", "SecurityIdentifier");
