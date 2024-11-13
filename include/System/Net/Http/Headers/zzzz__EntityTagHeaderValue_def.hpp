#pragma once
// IWYU pragma private; include "System/Net/Http/Headers/EntityTagHeaderValue.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EntityTagHeaderValue)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Net::Http::Headers {
class Lexer;
}
namespace System::Net::Http::Headers {
struct Token;
}
namespace System {
class ICloneable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class EntityTagHeaderValue;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Http::Headers::EntityTagHeaderValue);
// Type: System.Net.Http.Headers::EntityTagHeaderValue
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Http::Headers {
// Is value type: false
// CS Name: ::System.Net.Http.Headers::EntityTagHeaderValue*
class CORDL_TYPE EntityTagHeaderValue : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsWeak, put = set_IsWeak)) bool IsWeak;

  __declspec(property(get = get_Tag, put = set_Tag)) ::StringW Tag;

  /// @brief Field <IsWeak>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get__IsWeak_k__BackingField, put = __cordl_internal_set__IsWeak_k__BackingField)) bool _IsWeak_k__BackingField;

  /// @brief Field <Tag>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Tag_k__BackingField, put = __cordl_internal_set__Tag_k__BackingField)) ::StringW _Tag_k__BackingField;

  /// @brief Field any, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_any, put = setStaticF_any)) ::System::Net::Http::Headers::EntityTagHeaderValue* any;

  /// @brief Convert operator to "::System::ICloneable"
  constexpr operator ::System::ICloneable*() noexcept;

  /// @brief Method Equals, addr 0x41bc6cc, size 0xb4, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x41bc780, size 0x90, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::System::Net::Http::Headers::EntityTagHeaderValue* New_ctor();

  /// @brief Method System.ICloneable.Clone, addr 0x41bc6c4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_ICloneable_Clone();

  /// @brief Method ToString, addr 0x41bcbe4, size 0x64, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method TryParse, addr 0x41bcb34, size 0xb0, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, int32_t minimalCount, ByRef<::System::Collections::Generic::List_1<::System::Net::Http::Headers::EntityTagHeaderValue*>*> result);

  /// @brief Method TryParse, addr 0x41bc810, size 0xec, virtual false, abstract: false, final false
  static inline bool TryParse(::StringW input, ByRef<::System::Net::Http::Headers::EntityTagHeaderValue*> parsedValue);

  /// @brief Method TryParseElement, addr 0x41bc8fc, size 0x1e8, virtual false, abstract: false, final false
  static inline bool TryParseElement(::System::Net::Http::Headers::Lexer* lexer, ByRef<::System::Net::Http::Headers::EntityTagHeaderValue*> parsedValue, ByRef<::System::Net::Http::Headers::Token> t);

  constexpr bool const& __cordl_internal_get__IsWeak_k__BackingField() const;

  constexpr bool& __cordl_internal_get__IsWeak_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Tag_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Tag_k__BackingField();

  constexpr void __cordl_internal_set__IsWeak_k__BackingField(bool value);

  constexpr void __cordl_internal_set__Tag_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x41bc698, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Net::Http::Headers::EntityTagHeaderValue* getStaticF_any();

  /// @brief Method get_IsWeak, addr 0x41bc6a0, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsWeak();

  /// @brief Method get_Tag, addr 0x41bc6b4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Tag();

  /// @brief Convert to "::System::ICloneable"
  constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

  static inline void setStaticF_any(::System::Net::Http::Headers::EntityTagHeaderValue* value);

  /// @brief Method set_IsWeak, addr 0x41bc6a8, size 0xc, virtual false, abstract: false, final false
  inline void set_IsWeak(bool value);

  /// @brief Method set_Tag, addr 0x41bc6bc, size 0x8, virtual false, abstract: false, final false
  inline void set_Tag(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EntityTagHeaderValue();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EntityTagHeaderValue", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EntityTagHeaderValue(EntityTagHeaderValue&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EntityTagHeaderValue", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EntityTagHeaderValue(EntityTagHeaderValue const&) = delete;

  /// @brief Field <IsWeak>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____IsWeak_k__BackingField;

  /// @brief Field <Tag>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::StringW ____Tag_k__BackingField;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16662 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Http::Headers::EntityTagHeaderValue, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::EntityTagHeaderValue, ____IsWeak_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::Http::Headers::EntityTagHeaderValue, ____Tag_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace System::Net::Http::Headers
NEED_NO_BOX(::System::Net::Http::Headers::EntityTagHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::EntityTagHeaderValue*, "System.Net.Http.Headers", "EntityTagHeaderValue");
