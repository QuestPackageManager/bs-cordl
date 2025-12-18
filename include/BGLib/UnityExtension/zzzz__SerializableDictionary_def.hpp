#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/SerializableDictionary.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/UnityExtension/zzzz__SerializableDictionaryBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SerializableDictionary)
namespace BGLib::UnityExtension {
template <typename T> class SerializableDictionary_Storage_1;
}
// Forward declare root types
namespace BGLib::UnityExtension {
class SerializableDictionary;
}
namespace BGLib::UnityExtension {
template <typename T> class SerializableDictionary_Storage_1;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::UnityExtension::SerializableDictionary);
MARK_GEN_REF_PTR_T(::BGLib::UnityExtension::SerializableDictionary_Storage_1);
// Dependencies BGLib.UnityExtension.SerializableDictionaryBase::Storage
namespace BGLib::UnityExtension {
// cpp template
template <typename T>
// Is value type: false
// CS Name: BGLib.UnityExtension.SerializableDictionary/Storage`1<T>
class CORDL_TYPE SerializableDictionary_Storage_1 : public ::BGLib::UnityExtension::SerializableDictionaryBase_Storage {
public:
  // Declarations
  /// @brief Field data, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) T data;

  static inline ::BGLib::UnityExtension::SerializableDictionary_Storage_1<T>* New_ctor();

  constexpr T const& __cordl_internal_get_data() const;

  constexpr T& __cordl_internal_get_data();

  constexpr void __cordl_internal_set_data(T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializableDictionary_Storage_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializableDictionary_Storage_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializableDictionary_Storage_1(SerializableDictionary_Storage_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializableDictionary_Storage_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializableDictionary_Storage_1(SerializableDictionary_Storage_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20736 };

  /// @brief Field data, offset: 0x10, size: 0x8, def value: None
  T ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGLib::UnityExtension
// Dependencies System.Object
namespace BGLib::UnityExtension {
// Is value type: false
// CS Name: BGLib.UnityExtension.SerializableDictionary
class CORDL_TYPE SerializableDictionary : public ::System::Object {
public:
  // Declarations
  template <typename T> using Storage_1 = ::BGLib::UnityExtension::SerializableDictionary_Storage_1<T>;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializableDictionary();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SerializableDictionary", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SerializableDictionary(SerializableDictionary&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SerializableDictionary", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SerializableDictionary(SerializableDictionary const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20737 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::SerializableDictionary, 0x10>, "Size mismatch!");

} // namespace BGLib::UnityExtension
NEED_NO_BOX(::BGLib::UnityExtension::SerializableDictionary);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::SerializableDictionary*, "BGLib.UnityExtension", "SerializableDictionary");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGLib::UnityExtension::SerializableDictionary_Storage_1, "BGLib.UnityExtension", "SerializableDictionary/Storage`1");
