#pragma once
// IWYU pragma private; include "System/Globalization/CultureNotFoundException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArgumentException_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CultureNotFoundException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
template <typename T> struct Nullable_1;
}
// Forward declare root types
namespace System::Globalization {
class CultureNotFoundException;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::CultureNotFoundException);
// Dependencies System.ArgumentException, System.Nullable`1<T>
namespace System::Globalization {
// Is value type: false
// CS Name: System.Globalization.CultureNotFoundException
class CORDL_TYPE CultureNotFoundException : public ::System::ArgumentException {
public:
  // Declarations
  __declspec(property(get = get_FormatedInvalidCultureId)) ::StringW FormatedInvalidCultureId;

  __declspec(property(get = get_InvalidCultureId)) ::System::Nullable_1<int32_t> InvalidCultureId;

  __declspec(property(get = get_InvalidCultureName)) ::StringW InvalidCultureName;

  __declspec(property(get = get_Message)) ::StringW Message;

  /// @brief Field _invalidCultureId, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get__invalidCultureId, put = __cordl_internal_set__invalidCultureId)) ::System::Nullable_1<int32_t> _invalidCultureId;

  /// @brief Field _invalidCultureName, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__invalidCultureName, put = __cordl_internal_set__invalidCultureName)) ::StringW _invalidCultureName;

  /// @brief Method GetObjectData, addr 0x3d8bfb0, size 0x164, virtual true, abstract: false, final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Globalization::CultureNotFoundException* New_ctor();

  static inline ::System::Globalization::CultureNotFoundException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Globalization::CultureNotFoundException* New_ctor(::StringW paramName, ::StringW message);

  constexpr ::System::Nullable_1<int32_t> const& __cordl_internal_get__invalidCultureId() const;

  constexpr ::System::Nullable_1<int32_t>& __cordl_internal_get__invalidCultureId();

  constexpr ::StringW const& __cordl_internal_get__invalidCultureName() const;

  constexpr ::StringW& __cordl_internal_get__invalidCultureName();

  constexpr void __cordl_internal_set__invalidCultureId(::System::Nullable_1<int32_t> value);

  constexpr void __cordl_internal_set__invalidCultureName(::StringW value);

  /// @brief Method .ctor, addr 0x3d8bd54, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3d8bdf4, size 0x1bc, virtual false, abstract: false, final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor, addr 0x3d8bde0, size 0x14, virtual false, abstract: false, final false
  inline void _ctor(::StringW paramName, ::StringW message);

  /// @brief Method get_DefaultMessage, addr 0x3d8bda0, size 0x40, virtual false, abstract: false, final false
  static inline ::StringW get_DefaultMessage();

  /// @brief Method get_FormatedInvalidCultureId, addr 0x3d8c124, size 0x134, virtual false, abstract: false, final false
  inline ::StringW get_FormatedInvalidCultureId();

  /// @brief Method get_InvalidCultureId, addr 0x3d8c114, size 0x8, virtual true, abstract: false, final false
  inline ::System::Nullable_1<int32_t> get_InvalidCultureId();

  /// @brief Method get_InvalidCultureName, addr 0x3d8c11c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_InvalidCultureName();

  /// @brief Method get_Message, addr 0x3d8c258, size 0xbc, virtual true, abstract: false, final false
  inline ::StringW get_Message();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CultureNotFoundException();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CultureNotFoundException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CultureNotFoundException(CultureNotFoundException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CultureNotFoundException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CultureNotFoundException(CultureNotFoundException const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3666 };

  /// @brief Field _invalidCultureName, offset: 0x98, size: 0x8, def value: None
  ::StringW ____invalidCultureName;

  /// @brief Field _invalidCultureId, offset: 0xa0, size: 0x8, def value: None
  ::System::Nullable_1<int32_t> ____invalidCultureId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Globalization::CultureNotFoundException, ____invalidCultureName) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Globalization::CultureNotFoundException, ____invalidCultureId) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Globalization::CultureNotFoundException, 0xa8>, "Size mismatch!");

} // namespace System::Globalization
NEED_NO_BOX(::System::Globalization::CultureNotFoundException);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::CultureNotFoundException*, "System.Globalization", "CultureNotFoundException");
