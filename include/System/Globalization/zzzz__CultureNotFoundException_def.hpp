#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArgumentException_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CultureNotFoundException)
namespace System {
template <typename T> struct Nullable_1;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::Globalization {
class CultureNotFoundException;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::CultureNotFoundException);
// Type: System.Globalization::CultureNotFoundException
// SizeInfo { instance_size: 168, native_size: -1, calculated_instance_size: 168, calculated_native_size: 168, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2344)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2448), inst: 98 }),
// TypeDefinitionIndex(TypeDefinitionIndex(2448))} Self: TypeDefinitionIndex(TypeDefinitionIndex(3660)) CS Name: ::System.Globalization::CultureNotFoundException*
class CORDL_TYPE CultureNotFoundException : public ::System::ArgumentException {
public:
  // Declarations
  /// @brief Field _invalidCultureName, offset 0x98, size 0x8
  __declspec(property(get = __get__invalidCultureName, put = __set__invalidCultureName))::StringW _invalidCultureName;

  /// @brief Field _invalidCultureId, offset 0xa0, size 0x8
  __declspec(property(get = __get__invalidCultureId, put = __set__invalidCultureId))::System::Nullable_1<int32_t> _invalidCultureId;

  __declspec(property(get = get_InvalidCultureId))::System::Nullable_1<int32_t> InvalidCultureId;

  __declspec(property(get = get_InvalidCultureName))::StringW InvalidCultureName;

  __declspec(property(get = get_FormatedInvalidCultureId))::StringW FormatedInvalidCultureId;

  __declspec(property(get = get_Message))::StringW Message;

  constexpr ::StringW& __get__invalidCultureName();

  constexpr ::StringW const& __get__invalidCultureName() const;

  constexpr void __set__invalidCultureName(::StringW value);

  constexpr ::System::Nullable_1<int32_t>& __get__invalidCultureId();

  constexpr ::System::Nullable_1<int32_t> const& __get__invalidCultureId() const;

  constexpr void __set__invalidCultureId(::System::Nullable_1<int32_t> value);

  static inline ::System::Globalization::CultureNotFoundException* New_ctor();

  /// @brief Method .ctor addr 0x254d914 size 0x4c virtual false final false
  inline void _ctor();

  static inline ::System::Globalization::CultureNotFoundException* New_ctor(::StringW paramName, ::StringW message);

  /// @brief Method .ctor addr 0x254d9a0 size 0x14 virtual false final false
  inline void _ctor(::StringW paramName, ::StringW message);

  static inline ::System::Globalization::CultureNotFoundException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x254d9b4 size 0x1bc virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method GetObjectData addr 0x254db70 size 0x164 virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method get_InvalidCultureId addr 0x254dcd4 size 0x8 virtual true final false
  inline ::System::Nullable_1<int32_t> get_InvalidCultureId();

  /// @brief Method get_InvalidCultureName addr 0x254dcdc size 0x8 virtual true final false
  inline ::StringW get_InvalidCultureName();

  /// @brief Method get_DefaultMessage addr 0x254d960 size 0x40 virtual false final false
  static inline ::StringW get_DefaultMessage();

  /// @brief Method get_FormatedInvalidCultureId addr 0x254dce4 size 0x134 virtual false final false
  inline ::StringW get_FormatedInvalidCultureId();

  /// @brief Method get_Message addr 0x254de18 size 0xbc virtual true final false
  inline ::StringW get_Message();

  // Ctor Parameters [CppParam { name: "", ty: "CultureNotFoundException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CultureNotFoundException(CultureNotFoundException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CultureNotFoundException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CultureNotFoundException(CultureNotFoundException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CultureNotFoundException();

public:
  /// @brief Field _invalidCultureName, offset: 0x98, size: 0x8, def value: None
  ::StringW ____invalidCultureName;

  /// @brief Field _invalidCultureId, offset: 0xa0, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____invalidCultureId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::CultureNotFoundException, 0xa8>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::CultureNotFoundException);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::CultureNotFoundException*, "System.Globalization", "CultureNotFoundException");
