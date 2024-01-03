#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CaseInsensitiveAscii)
namespace System::Collections {
class IComparer;
}
namespace System::Collections {
class IEqualityComparer;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class CaseInsensitiveAscii;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::CaseInsensitiveAscii);
// Type: System.Net::CaseInsensitiveAscii
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9092))
// CS Name: ::System.Net::CaseInsensitiveAscii*
class CORDL_TYPE CaseInsensitiveAscii : public ::System::Object {
public:
  // Declarations
  /// @brief Field StaticInstance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_StaticInstance, put = setStaticF_StaticInstance))::System::Net::CaseInsensitiveAscii* StaticInstance;

  /// @brief Field AsciiToLower, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_AsciiToLower, put = setStaticF_AsciiToLower))::ArrayW<uint8_t, ::Array<uint8_t>*> AsciiToLower;

  /// @brief Convert operator to "::System::Collections::IEqualityComparer"
  constexpr operator ::System::Collections::IEqualityComparer*() noexcept;

  /// @brief Convert operator to "::System::Collections::IComparer"
  constexpr operator ::System::Collections::IComparer*() noexcept;

  static inline void setStaticF_StaticInstance(::System::Net::CaseInsensitiveAscii* value);

  static inline ::System::Net::CaseInsensitiveAscii* getStaticF_StaticInstance();

  static inline void setStaticF_AsciiToLower(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_AsciiToLower();

  /// @brief Method GetHashCode, addr 0x29a26ec, size 0x118, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::System::Object* myObject);

  /// @brief Method Compare, addr 0x29a2804, size 0x170, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Object* firstObject, ::System::Object* secondObject);

  /// @brief Method FastGetHashCode, addr 0x29a2974, size 0xf0, virtual false, abstract: false, final false
  inline int32_t FastGetHashCode(::StringW myString);

  /// @brief Method Equals, addr 0x29a2a64, size 0x178, virtual true, abstract: false, final true
  inline bool Equals(::System::Object* firstObject, ::System::Object* secondObject);

  static inline ::System::Net::CaseInsensitiveAscii* New_ctor();

  /// @brief Method .ctor, addr 0x29a2bdc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "CaseInsensitiveAscii", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CaseInsensitiveAscii(CaseInsensitiveAscii&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CaseInsensitiveAscii", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CaseInsensitiveAscii(CaseInsensitiveAscii const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CaseInsensitiveAscii();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::CaseInsensitiveAscii, 0x10>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::CaseInsensitiveAscii);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CaseInsensitiveAscii*, "System.Net", "CaseInsensitiveAscii");
