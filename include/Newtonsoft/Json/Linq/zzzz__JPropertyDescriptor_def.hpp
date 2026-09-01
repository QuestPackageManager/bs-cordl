#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Linq\JPropertyDescriptor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__PropertyDescriptor_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(JPropertyDescriptor)
namespace Newtonsoft::Json::Linq {
class JObject;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JPropertyDescriptor;
}
// Write type traits
MARK_REF_T(::Newtonsoft::Json::Linq::JPropertyDescriptor*);
DEFINE_IL2CPP_CLASS(::Newtonsoft::Json::Linq::JPropertyDescriptor*, "Newtonsoft.Json.Linq", "JPropertyDescriptor");
// Dependencies System.ComponentModel.PropertyDescriptor
namespace Newtonsoft::Json::Linq {
// Is value type: false
// CS Name: Newtonsoft.Json.Linq.JPropertyDescriptor
class CORDL_TYPE JPropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor {
public:
  // Declarations
  __declspec(property(get = get_ComponentType)) ::System::Type* ComponentType;

  __declspec(property(get = get_IsReadOnly)) bool IsReadOnly;

  __declspec(property(get = get_NameHashCode)) int32_t NameHashCode;

  __declspec(property(get = get_PropertyType)) ::System::Type* PropertyType;

  /// @brief Method CanResetValue, addr 0x5d794a0, size 0x8, virtual true, abstract: false, final false
  inline bool CanResetValue(::System::Object* component);

  /// @brief Method CastInstance, addr 0x5d79420, size 0x80, virtual false, abstract: false, final false
  static inline ::Newtonsoft::Json::Linq::JObject* CastInstance(::System::Object* instance);

  /// @brief Method GetValue, addr 0x5d794a8, size 0xac, virtual true, abstract: false, final false
  inline ::System::Object* GetValue(::System::Object* component);

  static inline ::Newtonsoft::Json::Linq::JPropertyDescriptor* New_ctor(::StringW name);

  /// @brief Method ResetValue, addr 0x5d79554, size 0x4, virtual true, abstract: false, final false
  inline void ResetValue(::System::Object* component);

  /// @brief Method SetValue, addr 0x5d79558, size 0x13c, virtual true, abstract: false, final false
  inline void SetValue(::System::Object* component, ::System::Object* value);

  /// @brief Method ShouldSerializeValue, addr 0x5d79694, size 0x8, virtual true, abstract: false, final false
  inline bool ShouldSerializeValue(::System::Object* component);

  /// @brief Method .ctor, addr 0x5d76408, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW name);

  /// @brief Method get_ComponentType, addr 0x5d7969c, size 0x60, virtual true, abstract: false, final false
  inline ::System::Type* get_ComponentType();

  /// @brief Method get_IsReadOnly, addr 0x5d796fc, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsReadOnly();

  /// @brief Method get_NameHashCode, addr 0x5d79734, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_NameHashCode();

  /// @brief Method get_PropertyType, addr 0x5d79704, size 0x30, virtual true, abstract: false, final false
  inline ::System::Type* get_PropertyType();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr JPropertyDescriptor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "JPropertyDescriptor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  JPropertyDescriptor(JPropertyDescriptor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "JPropertyDescriptor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  JPropertyDescriptor(JPropertyDescriptor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13598 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Newtonsoft::Json::Linq::JPropertyDescriptor) == 0x88, "Size mismatch!");

} // namespace Newtonsoft::Json::Linq
