#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Globalization/zzzz__CompareOptions_def.hpp"
#include "System/zzzz__StringComparer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CultureAwareComparer)
namespace System::Globalization {
class CompareInfo;
}
namespace System::Globalization {
struct CompareOptions;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class CultureAwareComparer;
}
// Write type traits
MARK_REF_PTR_T(::System::CultureAwareComparer);
// Type: System::CultureAwareComparer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3659)), TypeDefinitionIndex(TypeDefinitionIndex(2474))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2475))
// CS Name: ::System::CultureAwareComparer*
class CORDL_TYPE CultureAwareComparer : public ::System::StringComparer {
public:
  // Declarations
  /// @brief Field _compareInfo, offset 0x10, size 0x8
  __declspec(property(get = __get__compareInfo, put = __set__compareInfo))::System::Globalization::CompareInfo* _compareInfo;

  /// @brief Field _options, offset 0x18, size 0x4
  __declspec(property(get = __get__options, put = __set__options))::System::Globalization::CompareOptions _options;

  /// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
  constexpr operator ::System::Runtime::Serialization::ISerializable*() noexcept;

  /// @brief Convert to "::System::Runtime::Serialization::ISerializable"
  constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

  constexpr ::System::Globalization::CompareInfo*& __get__compareInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CompareInfo*> const& __get__compareInfo() const;

  constexpr void __set__compareInfo(::System::Globalization::CompareInfo* value);

  constexpr ::System::Globalization::CompareOptions& __get__options();

  constexpr ::System::Globalization::CompareOptions const& __get__options() const;

  constexpr void __set__options(::System::Globalization::CompareOptions value);

  static inline ::System::CultureAwareComparer* New_ctor(::System::Globalization::CultureInfo* culture, ::System::Globalization::CompareOptions options);

  /// @brief Method .ctor, addr 0x25c534c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::System::Globalization::CultureInfo* culture, ::System::Globalization::CompareOptions options);

  static inline ::System::CultureAwareComparer* New_ctor(::System::Globalization::CompareInfo* compareInfo, ::System::Globalization::CompareOptions options);

  /// @brief Method .ctor, addr 0x25c53a0, size 0xe4, virtual false, abstract: false, final false
  inline void _ctor(::System::Globalization::CompareInfo* compareInfo, ::System::Globalization::CompareOptions options);

  static inline ::System::CultureAwareComparer* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x25c5484, size 0x20c, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method Compare, addr 0x25c5690, size 0x54, virtual true, abstract: false, final false
  inline int32_t Compare(::StringW x, ::StringW y);

  /// @brief Method Equals, addr 0x25c56e4, size 0x50, virtual true, abstract: false, final false
  inline bool Equals(::StringW x, ::StringW y);

  /// @brief Method GetHashCode, addr 0x25c5734, size 0x74, virtual true, abstract: false, final false
  inline int32_t GetHashCode(::StringW obj);

  /// @brief Method Equals, addr 0x25c57a8, size 0x98, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x25c5840, size 0x34, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetObjectData, addr 0x25c5874, size 0xec, virtual true, abstract: false, final true
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "CultureAwareComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CultureAwareComparer(CultureAwareComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CultureAwareComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CultureAwareComparer(CultureAwareComparer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CultureAwareComparer();

public:
  /// @brief Field _compareInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Globalization::CompareInfo* ____compareInfo;

  /// @brief Field _options, offset: 0x18, size: 0x4, def value: None
  ::System::Globalization::CompareOptions ____options;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::CultureAwareComparer, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::CultureAwareComparer, ____compareInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::CultureAwareComparer, ____options) == 0x18, "Offset mismatch!");

} // namespace System
NEED_NO_BOX(::System::CultureAwareComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::CultureAwareComparer*, "System", "CultureAwareComparer");
