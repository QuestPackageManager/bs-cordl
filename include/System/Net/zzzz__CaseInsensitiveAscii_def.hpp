#pragma once
// IWYU pragma private; include "System/Net/CaseInsensitiveAscii.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CaseInsensitiveAscii)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class CaseInsensitiveAscii;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::CaseInsensitiveAscii);
// Dependencies System.Collections.IComparer, System.Collections.IEqualityComparer, System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.CaseInsensitiveAscii
class CORDL_TYPE CaseInsensitiveAscii : public ::System::Object {
public:
  // Declarations
  /// @brief Field AsciiToLower, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_AsciiToLower, put = setStaticF_AsciiToLower)) ::ArrayW<uint8_t, ::Array<uint8_t>*> AsciiToLower;

  /// @brief Field StaticInstance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_StaticInstance, put = setStaticF_StaticInstance)) ::System::Net::CaseInsensitiveAscii* StaticInstance;

  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEqualityComparer"
  constexpr operator ::System::Collections::IEqualityComparer*() noexcept;

  /// @brief Method Compare, addr 0x44a53a0, size 0x170, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Object* firstObject, ::System::Object* secondObject);

  /// @brief Method Equals, addr 0x44a5600, size 0x180, virtual true, abstract: false, final true
  inline bool Equals(::System::Object* firstObject, ::System::Object* secondObject);

  /// @brief Method FastGetHashCode, addr 0x44a5510, size 0xf0, virtual false, abstract: false, final false
  inline int32_t FastGetHashCode(::StringW myString);

  /// @brief Method GetHashCode, addr 0x44a5288, size 0x118, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::System::Object* myObject);

  static inline ::System::Net::CaseInsensitiveAscii* New_ctor();

  /// @brief Method .ctor, addr 0x44a5780, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_AsciiToLower();

  static inline ::System::Net::CaseInsensitiveAscii* getStaticF_StaticInstance();

  /// @brief Convert to "::System::Collections::IComparer"
  constexpr ::System::Collections::IComparer* i___System__Collections__IComparer() noexcept;

  /// @brief Convert to "::System::Collections::IEqualityComparer"
  constexpr ::System::Collections::IEqualityComparer* i___System__Collections__IEqualityComparer() noexcept;

  static inline void setStaticF_AsciiToLower(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_StaticInstance(::System::Net::CaseInsensitiveAscii* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CaseInsensitiveAscii();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CaseInsensitiveAscii", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CaseInsensitiveAscii(CaseInsensitiveAscii&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CaseInsensitiveAscii", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CaseInsensitiveAscii(CaseInsensitiveAscii const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9613 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::CaseInsensitiveAscii, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::CaseInsensitiveAscii);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CaseInsensitiveAscii*, "System.Net", "CaseInsensitiveAscii");
