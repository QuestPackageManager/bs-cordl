#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SerializationHelpers)
// Forward declare root types
namespace GlobalNamespace {
class SerializationHelpers;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SerializationHelpers);
// Type: ::SerializationHelpers
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13892))
// CS Name: ::SerializationHelpers*
class CORDL_TYPE SerializationHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method DeserializeData addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T DeserializeData(::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method SerializeObject addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> SerializeObject(T serializableObject);

  /// @brief Method DeserializeDataFromPlayerPrefs addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T DeserializeDataFromPlayerPrefs(::StringW key);

  /// @brief Method SerializeObjectIntoPlayerPrefs addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void SerializeObjectIntoPlayerPrefs(::StringW key, T serializableObject);

  /// @brief Method DeserializeDataFromFile addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline T DeserializeDataFromFile(::StringW filePath);

  /// @brief Method SerializeObjectToFile addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void SerializeObjectToFile(::StringW filePath, T serializableObject);

  static inline ::GlobalNamespace::SerializationHelpers* New_ctor();

  /// @brief Method .ctor addr 0x1f99408 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SerializationHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializationHelpers(SerializationHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializationHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializationHelpers(SerializationHelpers const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializationHelpers();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SerializationHelpers, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SerializationHelpers);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SerializationHelpers*, "", "SerializationHelpers");
