#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Version)
namespace System::Text {
class StringBuilder;
}
namespace System {
class ISpanFormattable;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class IComparable;
}
namespace System {
template <typename T> struct Span_1;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class ICloneable;
}
// Forward declare root types
namespace System {
class Version;
}
// Write type traits
MARK_REF_PTR_T(::System::Version);
// Type: System::Version
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2512))
// CS Name: ::System::Version*
class CORDL_TYPE Version : public ::System::Object {
public:
  // Declarations
  /// @brief Field _Major, offset 0x10, size 0x4
  __declspec(property(get = __get__Major, put = __set__Major)) int32_t _Major;

  /// @brief Field _Minor, offset 0x14, size 0x4
  __declspec(property(get = __get__Minor, put = __set__Minor)) int32_t _Minor;

  /// @brief Field _Build, offset 0x18, size 0x4
  __declspec(property(get = __get__Build, put = __set__Build)) int32_t _Build;

  /// @brief Field _Revision, offset 0x1c, size 0x4
  __declspec(property(get = __get__Revision, put = __set__Revision)) int32_t _Revision;

  __declspec(property(get = get_Major)) int32_t Major;

  __declspec(property(get = get_Minor)) int32_t Minor;

  __declspec(property(get = get_Build)) int32_t Build;

  __declspec(property(get = get_Revision)) int32_t Revision;

  __declspec(property(get = get_DefaultFormatFieldCount)) int32_t DefaultFormatFieldCount;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*() noexcept;

  /// @brief Convert operator to "::System::IComparable_1<::System::Version*>"
  constexpr operator ::System::IComparable_1<::System::Version*>*() noexcept;

  /// @brief Convert operator to "::System::IEquatable_1<::System::Version*>"
  constexpr operator ::System::IEquatable_1<::System::Version*>*() noexcept;

  /// @brief Convert operator to "::System::ISpanFormattable"
  constexpr operator ::System::ISpanFormattable*() noexcept;

  constexpr int32_t& __get__Major();

  constexpr int32_t const& __get__Major() const;

  constexpr void __set__Major(int32_t value);

  constexpr int32_t& __get__Minor();

  constexpr int32_t const& __get__Minor() const;

  constexpr void __set__Minor(int32_t value);

  constexpr int32_t& __get__Build();

  constexpr int32_t const& __get__Build() const;

  constexpr void __set__Build(int32_t value);

  constexpr int32_t& __get__Revision();

  constexpr int32_t const& __get__Revision() const;

  constexpr void __set__Revision(int32_t value);

  static inline ::System::Version* New_ctor(int32_t major, int32_t minor, int32_t build, int32_t revision);

  /// @brief Method .ctor addr 0x25ce8d4 size 0x124 virtual false final false
  inline void _ctor(int32_t major, int32_t minor, int32_t build, int32_t revision);

  static inline ::System::Version* New_ctor(int32_t major, int32_t minor, int32_t build);

  /// @brief Method .ctor addr 0x25ce9f8 size 0xf8 virtual false final false
  inline void _ctor(int32_t major, int32_t minor, int32_t build);

  static inline ::System::Version* New_ctor(int32_t major, int32_t minor);

  /// @brief Method .ctor addr 0x25ceaf0 size 0xc0 virtual false final false
  inline void _ctor(int32_t major, int32_t minor);

  static inline ::System::Version* New_ctor(::StringW version);

  /// @brief Method .ctor addr 0x25cebb0 size 0x44 virtual false final false
  inline void _ctor(::StringW version);

  static inline ::System::Version* New_ctor();

  /// @brief Method .ctor addr 0x25cec90 size 0x24 virtual false final false
  inline void _ctor();

  static inline ::System::Version* New_ctor(::System::Version* version);

  /// @brief Method .ctor addr 0x25cecb4 size 0x3c virtual false final false
  inline void _ctor(::System::Version* version);

  /// @brief Method Clone addr 0x25cecf0 size 0x60 virtual true final true
  inline ::System::Object* Clone();

  /// @brief Method get_Major addr 0x25ced50 size 0x8 virtual false final false
  inline int32_t get_Major();

  /// @brief Method get_Minor addr 0x25ced58 size 0x8 virtual false final false
  inline int32_t get_Minor();

  /// @brief Method get_Build addr 0x25ced60 size 0x8 virtual false final false
  inline int32_t get_Build();

  /// @brief Method get_Revision addr 0x25ced68 size 0x8 virtual false final false
  inline int32_t get_Revision();

  /// @brief Method CompareTo addr 0x25ced70 size 0xbc virtual true final true
  inline int32_t CompareTo(::System::Object* version);

  /// @brief Method CompareTo addr 0x25cee40 size 0x68 virtual true final true
  inline int32_t CompareTo(::System::Version* value);

  /// @brief Method Equals addr 0x25ceea8 size 0x64 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x25cef0c size 0x60 virtual true final true
  inline bool Equals(::System::Version* obj);

  /// @brief Method GetHashCode addr 0x25cef6c size 0x1c virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x25cef88 size 0x28 virtual true final false
  inline ::StringW ToString();

  /// @brief Method ToString addr 0x25cefd8 size 0x8c virtual false final false
  inline ::StringW ToString(int32_t fieldCount);

  /// @brief Method TryFormat addr 0x25cf2b0 size 0x2c virtual false final false
  inline bool TryFormat(::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten);

  /// @brief Method TryFormat addr 0x25cf2dc size 0x128 virtual false final false
  inline bool TryFormat(::System::Span_1<char16_t> destination, int32_t fieldCount, ByRef<int32_t> charsWritten);

  /// @brief Method System.ISpanFormattable.TryFormat addr 0x25cf404 size 0x2c virtual true final true
  inline bool System_ISpanFormattable_TryFormat(::System::Span_1<char16_t> destination, ByRef<int32_t> charsWritten, ::System::ReadOnlySpan_1<char16_t> format, ::System::IFormatProvider* provider);

  /// @brief Method get_DefaultFormatFieldCount addr 0x25cefb0 size 0x28 virtual false final false
  inline int32_t get_DefaultFormatFieldCount();

  /// @brief Method ToCachedStringBuilder addr 0x25cf064 size 0x24c virtual false final false
  inline ::System::Text::StringBuilder* ToCachedStringBuilder(int32_t fieldCount);

  /// @brief Method Parse addr 0x25cebf4 size 0x9c virtual false final false
  static inline ::System::Version* Parse(::StringW input);

  /// @brief Method ParseVersion addr 0x25cf430 size 0x4d4 virtual false final false
  static inline ::System::Version* ParseVersion(::System::ReadOnlySpan_1<char16_t> input, bool throwOnFailure);

  /// @brief Method TryParseComponent addr 0x25cf904 size 0x118 virtual false final false
  static inline bool TryParseComponent(::System::ReadOnlySpan_1<char16_t> component, ::StringW componentName, bool throwOnFailure, ByRef<int32_t> parsedComponent);

  /// @brief Method op_Equality addr 0x25cee2c size 0x14 virtual false final false
  static inline bool op_Equality(::System::Version* v1, ::System::Version* v2);

  /// @brief Method op_Inequality addr 0x25cfa1c size 0x28 virtual false final false
  static inline bool op_Inequality(::System::Version* v1, ::System::Version* v2);

  /// @brief Method op_LessThan addr 0x25cfa44 size 0x64 virtual false final false
  static inline bool op_LessThan(::System::Version* v1, ::System::Version* v2);

  /// @brief Method op_LessThanOrEqual addr 0x25cfaa8 size 0x68 virtual false final false
  static inline bool op_LessThanOrEqual(::System::Version* v1, ::System::Version* v2);

  /// @brief Method op_GreaterThan addr 0x25cfb10 size 0x10 virtual false final false
  static inline bool op_GreaterThan(::System::Version* v1, ::System::Version* v2);

  /// @brief Method op_GreaterThanOrEqual addr 0x25cfb20 size 0x10 virtual false final false
  static inline bool op_GreaterThanOrEqual(::System::Version* v1, ::System::Version* v2);

  // Ctor Parameters [CppParam { name: "", ty: "Version", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Version(Version&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Version", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Version(Version const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Version();

public:
  /// @brief Field _Major, offset: 0x10, size: 0x4, def value: None
  int32_t ____Major;

  /// @brief Field _Minor, offset: 0x14, size: 0x4, def value: None
  int32_t ____Minor;

  /// @brief Field _Build, offset: 0x18, size: 0x4, def value: None
  int32_t ____Build;

  /// @brief Field _Revision, offset: 0x1c, size: 0x4, def value: None
  int32_t ____Revision;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Version, 0x20>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::Version);
DEFINE_IL2CPP_ARG_TYPE(::System::Version*, "System", "Version");
