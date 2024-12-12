#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/Utility/SerializationUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
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
struct SerializationUtilities_ObjectType;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets::Utility {
struct SerializationUtilities_ObjectType;
}
namespace UnityEngine::AddressableAssets::Utility {
class SerializationUtilities;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType);
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::Utility::SerializationUtilities);
// Dependencies
namespace UnityEngine::AddressableAssets::Utility {
// Is value type: true
// CS Name: UnityEngine.AddressableAssets.Utility.SerializationUtilities/ObjectType
struct CORDL_TYPE SerializationUtilities_ObjectType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SerializationUtilities_ObjectType_Unwrapped
  enum struct __SerializationUtilities_ObjectType_Unwrapped : int32_t {
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
  constexpr operator __SerializationUtilities_ObjectType_Unwrapped() const noexcept {
    return static_cast<__SerializationUtilities_ObjectType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationUtilities_ObjectType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SerializationUtilities_ObjectType(int32_t value__) noexcept;

  /// @brief Field AsciiString value: I32(0)
  static ::UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType const AsciiString;

  /// @brief Field Hash128 value: I32(5)
  static ::UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType const Hash128;

  /// @brief Field Int32 value: I32(4)
  static ::UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType const Int32;

  /// @brief Field JsonObject value: I32(7)
  static ::UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType const JsonObject;

  /// @brief Field Type value: I32(6)
  static ::UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType const Type;

  /// @brief Field UInt16 value: I32(2)
  static ::UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType const UInt16;

  /// @brief Field UInt32 value: I32(3)
  static ::UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType const UInt32;

  /// @brief Field UnicodeString value: I32(1)
  static ::UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType const UnicodeString;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16195 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets::Utility
// Dependencies System.Object
namespace UnityEngine::AddressableAssets::Utility {
// Is value type: false
// CS Name: UnityEngine.AddressableAssets.Utility.SerializationUtilities
class CORDL_TYPE SerializationUtilities : public ::System::Object {
public:
  // Declarations
  using ObjectType = ::UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType;

  /// @brief Method ReadInt32FromByteArray, addr 0x44f64c4, size 0x74, virtual false, abstract: false, final false
  static inline int32_t ReadInt32FromByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t offset);

  /// @brief Method ReadObjectFromByteArray, addr 0x44f65bc, size 0x514, virtual false, abstract: false, final false
  static inline ::System::Object* ReadObjectFromByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> keyData, int32_t dataIndex);

  /// @brief Method WriteInt32ToByteArray, addr 0x44f6538, size 0x84, virtual false, abstract: false, final false
  static inline int32_t WriteInt32ToByteArray(::ArrayW<uint8_t, ::Array<uint8_t>*> data, int32_t val, int32_t offset);

  /// @brief Method WriteObjectToByteList, addr 0x44f6ad0, size 0xad0, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16196 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::Utility::SerializationUtilities, 0x10>, "Size mismatch!");

} // namespace UnityEngine::AddressableAssets::Utility
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Utility::SerializationUtilities_ObjectType, "UnityEngine.AddressableAssets.Utility", "SerializationUtilities/ObjectType");
NEED_NO_BOX(::UnityEngine::AddressableAssets::Utility::SerializationUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::Utility::SerializationUtilities*, "UnityEngine.AddressableAssets.Utility", "SerializationUtilities");
