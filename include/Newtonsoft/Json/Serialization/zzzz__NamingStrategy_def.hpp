#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/NamingStrategy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NamingStrategy)
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class NamingStrategy;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::NamingStrategy);
// Dependencies System.Object
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: Newtonsoft.Json.Serialization.NamingStrategy
class CORDL_TYPE NamingStrategy : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_OverrideSpecifiedNames, put = set_OverrideSpecifiedNames)) bool OverrideSpecifiedNames;

  __declspec(property(get = get_ProcessDictionaryKeys, put = set_ProcessDictionaryKeys)) bool ProcessDictionaryKeys;

  __declspec(property(get = get_ProcessExtensionDataNames, put = set_ProcessExtensionDataNames)) bool ProcessExtensionDataNames;

  /// @brief Field <OverrideSpecifiedNames>k__BackingField, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get__OverrideSpecifiedNames_k__BackingField,
                      put = __cordl_internal_set__OverrideSpecifiedNames_k__BackingField)) bool _OverrideSpecifiedNames_k__BackingField;

  /// @brief Field <ProcessDictionaryKeys>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__ProcessDictionaryKeys_k__BackingField,
                      put = __cordl_internal_set__ProcessDictionaryKeys_k__BackingField)) bool _ProcessDictionaryKeys_k__BackingField;

  /// @brief Field <ProcessExtensionDataNames>k__BackingField, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get__ProcessExtensionDataNames_k__BackingField,
                      put = __cordl_internal_set__ProcessExtensionDataNames_k__BackingField)) bool _ProcessExtensionDataNames_k__BackingField;

  /// @brief Method Equals, addr 0x3efe2c8, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x3efe348, size 0xfc, virtual false, abstract: false, final false
  inline bool Equals(::Newtonsoft::Json::Serialization::NamingStrategy* other);

  /// @brief Method GetDictionaryKey, addr 0x3efe1cc, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW GetDictionaryKey(::StringW key);

  /// @brief Method GetExtensionDataName, addr 0x3efe1b0, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW GetExtensionDataName(::StringW name);

  /// @brief Method GetHashCode, addr 0x3efe1e8, size 0xe0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetPropertyName, addr 0x3efe190, size 0x20, virtual true, abstract: false, final false
  inline ::StringW GetPropertyName(::StringW name, bool hasSpecifiedName);

  static inline ::Newtonsoft::Json::Serialization::NamingStrategy* New_ctor();

  /// @brief Method ResolvePropertyName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ResolvePropertyName(::StringW name);

  constexpr bool const& __cordl_internal_get__OverrideSpecifiedNames_k__BackingField() const;

  constexpr bool& __cordl_internal_get__OverrideSpecifiedNames_k__BackingField();

  constexpr bool const& __cordl_internal_get__ProcessDictionaryKeys_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ProcessDictionaryKeys_k__BackingField();

  constexpr bool const& __cordl_internal_get__ProcessExtensionDataNames_k__BackingField() const;

  constexpr bool& __cordl_internal_get__ProcessExtensionDataNames_k__BackingField();

  constexpr void __cordl_internal_set__OverrideSpecifiedNames_k__BackingField(bool value);

  constexpr void __cordl_internal_set__ProcessDictionaryKeys_k__BackingField(bool value);

  constexpr void __cordl_internal_set__ProcessExtensionDataNames_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x3efda94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_OverrideSpecifiedNames, addr 0x3efe17c, size 0x8, virtual false, abstract: false, final false
  inline bool get_OverrideSpecifiedNames();

  /// @brief Method get_ProcessDictionaryKeys, addr 0x3efe154, size 0x8, virtual false, abstract: false, final false
  inline bool get_ProcessDictionaryKeys();

  /// @brief Method get_ProcessExtensionDataNames, addr 0x3efe168, size 0x8, virtual false, abstract: false, final false
  inline bool get_ProcessExtensionDataNames();

  /// @brief Method set_OverrideSpecifiedNames, addr 0x3efe184, size 0xc, virtual false, abstract: false, final false
  inline void set_OverrideSpecifiedNames(bool value);

  /// @brief Method set_ProcessDictionaryKeys, addr 0x3efe15c, size 0xc, virtual false, abstract: false, final false
  inline void set_ProcessDictionaryKeys(bool value);

  /// @brief Method set_ProcessExtensionDataNames, addr 0x3efe170, size 0xc, virtual false, abstract: false, final false
  inline void set_ProcessExtensionDataNames(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NamingStrategy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NamingStrategy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NamingStrategy(NamingStrategy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NamingStrategy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NamingStrategy(NamingStrategy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10345 };

  /// @brief Field <ProcessDictionaryKeys>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____ProcessDictionaryKeys_k__BackingField;

  /// @brief Field <ProcessExtensionDataNames>k__BackingField, offset: 0x11, size: 0x1, def value: None
  bool ____ProcessExtensionDataNames_k__BackingField;

  /// @brief Field <OverrideSpecifiedNames>k__BackingField, offset: 0x12, size: 0x1, def value: None
  bool ____OverrideSpecifiedNames_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Newtonsoft::Json::Serialization::NamingStrategy, ____ProcessDictionaryKeys_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::NamingStrategy, ____ProcessExtensionDataNames_k__BackingField) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::NamingStrategy, ____OverrideSpecifiedNames_k__BackingField) == 0x12, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::NamingStrategy, 0x18>, "Size mismatch!");

} // namespace Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::NamingStrategy);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::NamingStrategy*, "Newtonsoft.Json.Serialization", "NamingStrategy");
