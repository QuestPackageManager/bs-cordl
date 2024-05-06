#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SerializationUtilities)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine::AddressableAssets::Utility {
struct __SerializationUtilities__ObjectType;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::Utility {
struct __SerializationUtilities__ObjectType;
}
namespace UnityEngine::AddressableAssets::Utility {
class SerializationUtilities;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::Utility::SerializationUtilities);
// Type: ::ObjectType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::Utility {
// Is value type: true
// CS Name: ::SerializationUtilities::ObjectType
struct CORDL_TYPE __SerializationUtilities__ObjectType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SerializationUtilities__ObjectType_Unwrapped
  enum struct ____SerializationUtilities__ObjectType_Unwrapped : int32_t {
    __E_AsciiString = static_cast<int32_t>(0x0),
    __E_UnicodeString = static_cast<int32_t>(0x1),
    __E_UInt16 = static_cast<int32_t>(0x2),
    __E_UInt32 = static_cast<int32_t>(0x3),
    __E_Int32 = static_cast<int32_t>(0x4),
    __E_Hash128 = static_cast<int32_t>(0x5),
    __E_Type = static_cast<int32_t>(0x6),
    __E_JsonObject = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SerializationUtilities__ObjectType_Unwrapped() const noexcept {
    return static_cast<____SerializationUtilities__ObjectType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SerializationUtilities__ObjectType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SerializationUtilities__ObjectType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AsciiString value: static_cast<int32_t>(0x0)
  static ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType const AsciiString;

  /// @brief Field Hash128 value: static_cast<int32_t>(0x5)
  static ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType const Hash128;

  /// @brief Field Int32 value: static_cast<int32_t>(0x4)
  static ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType const Int32;

  /// @brief Field JsonObject value: static_cast<int32_t>(0x7)
  static ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType const JsonObject;

  /// @brief Field Type value: static_cast<int32_t>(0x6)
  static ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType const Type;

  /// @brief Field UInt16 value: static_cast<int32_t>(0x2)
  static ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType const UInt16;

  /// @brief Field UInt32 value: static_cast<int32_t>(0x3)
  static ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType const UInt32;

  /// @brief Field UnicodeString value: static_cast<int32_t>(0x1)
  static ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType const UnicodeString;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::AddressableAssets::Utility
// Type: UnityEngine.AddressableAssets.Utility::SerializationUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets::Utility {
// Is value type: false
// CS Name: ::UnityEngine.AddressableAssets.Utility::SerializationUtilities*
class CORDL_TYPE SerializationUtilities : public ::System::Object {
public:
  // Declarations
  using ObjectType = ::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType;

  /// @brief Method ReadInt32FromByteArray, addr 0x305f780, size 0x74, virtual false, abstract: false, final false
  static inline int32_t ReadInt32FromByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset);

  /// @brief Method ReadObjectFromByteArray, addr 0x305f878, size 0x5a0, virtual false, abstract: false, final false
  static inline ::System::Object* ReadObjectFromByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> keyData, int32_t dataIndex);

  /// @brief Method WriteInt32ToByteArray, addr 0x305f7f4, size 0x84, virtual false, abstract: false, final false
  static inline int32_t WriteInt32ToByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t val, int32_t offset);

  /// @brief Method WriteObjectToByteList, addr 0x305fe18, size 0xb60, virtual false, abstract: false, final false
  static inline int32_t WriteObjectToByteList(::System::Object* obj, ::System::Collections::Generic::List_1<uint8_t>* buffer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializationUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializationUtilities(SerializationUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializationUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializationUtilities(SerializationUtilities const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Utility::SerializationUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets::Utility
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Utility::__SerializationUtilities__ObjectType, "UnityEngine.AddressableAssets.Utility", "SerializationUtilities/ObjectType");
NEED_NO_BOX(::UnityEngine::AddressableAssets::Utility::SerializationUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Utility::SerializationUtilities*, "UnityEngine.AddressableAssets.Utility", "SerializationUtilities");
