#pragma once
// IWYU pragma private; include "Unity/Properties/ConversionRegistry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ConversionRegistry)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace System {
class Delegate;
}
namespace System {
class Type;
}
namespace Unity::Properties {
class ConversionRegistry_ConverterKeyComparer;
}
namespace Unity::Properties {
struct ConversionRegistry_ConverterKey;
}
// Forward declare root types
namespace Unity::Properties {
class ConversionRegistry_ConverterKeyComparer;
}
namespace Unity::Properties {
struct ConversionRegistry;
}
namespace Unity::Properties {
struct ConversionRegistry_ConverterKey;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::ConversionRegistry_ConverterKeyComparer);
MARK_VAL_T(::Unity::Properties::ConversionRegistry);
MARK_VAL_T(::Unity::Properties::ConversionRegistry_ConverterKey);
// Dependencies System.Object
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.ConversionRegistry/ConverterKeyComparer
class CORDL_TYPE ConversionRegistry_ConverterKeyComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry_ConverterKey>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry_ConverterKey>*() noexcept;

  /// @brief Method Equals, addr 0x696e094, size 0x68, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Properties::ConversionRegistry_ConverterKey x, ::Unity::Properties::ConversionRegistry_ConverterKey y);

  /// @brief Method GetHashCode, addr 0x696e0fc, size 0x80, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::Unity::Properties::ConversionRegistry_ConverterKey obj);

  static inline ::Unity::Properties::ConversionRegistry_ConverterKeyComparer* New_ctor();

  /// @brief Method .ctor, addr 0x696e090, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry_ConverterKey>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry_ConverterKey>*
  i___System__Collections__Generic__IEqualityComparer_1___Unity__Properties__ConversionRegistry_ConverterKey_() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConversionRegistry_ConverterKeyComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConversionRegistry_ConverterKeyComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConversionRegistry_ConverterKeyComparer(ConversionRegistry_ConverterKeyComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConversionRegistry_ConverterKeyComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConversionRegistry_ConverterKeyComparer(ConversionRegistry_ConverterKeyComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19382 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::ConversionRegistry_ConverterKeyComparer, 0x10>, "Size mismatch!");

} // namespace Unity::Properties
// Dependencies
namespace Unity::Properties {
// Is value type: true
// CS Name: Unity.Properties.ConversionRegistry/ConverterKey
struct CORDL_TYPE ConversionRegistry_ConverterKey {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x696ded4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* source, ::System::Type* destination);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConversionRegistry_ConverterKey();

  // Ctor Parameters [CppParam { name: "SourceType", ty: "::System::Type*", modifiers: "", def_value: None }, CppParam { name: "DestinationType", ty: "::System::Type*", modifiers: "", def_value: None
  // }]
  constexpr ConversionRegistry_ConverterKey(::System::Type* SourceType, ::System::Type* DestinationType) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19383 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field SourceType, offset: 0x0, size: 0x8, def value: None
  ::System::Type* SourceType;

  /// @brief Field DestinationType, offset: 0x8, size: 0x8, def value: None
  ::System::Type* DestinationType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::ConversionRegistry_ConverterKey, SourceType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::ConversionRegistry_ConverterKey, DestinationType) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Properties::ConversionRegistry_ConverterKey, 0x10>, "Size mismatch!");

} // namespace Unity::Properties
// Dependencies
namespace Unity::Properties {
// Is value type: true
// CS Name: Unity.Properties.ConversionRegistry
struct CORDL_TYPE ConversionRegistry {
public:
  // Declarations
  using ConverterKey = ::Unity::Properties::ConversionRegistry_ConverterKey;

  using ConverterKeyComparer = ::Unity::Properties::ConversionRegistry_ConverterKeyComparer;

  /// @brief Field Comparer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Comparer, put = setStaticF_Comparer)) ::Unity::Properties::ConversionRegistry_ConverterKeyComparer* Comparer;

  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry>*();

  /// @brief Method Create, addr 0x696dd30, size 0xcc, virtual false, abstract: false, final false
  static inline ::Unity::Properties::ConversionRegistry Create();

  /// @brief Method Equals, addr 0x696dff8, size 0xc, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Properties::ConversionRegistry x, ::Unity::Properties::ConversionRegistry y);

  /// @brief Method GetConverter, addr 0x696dedc, size 0x8c, virtual false, abstract: false, final false
  inline ::System::Delegate* GetConverter(::System::Type* source, ::System::Type* destination);

  /// @brief Method GetHashCode, addr 0x696e004, size 0x20, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::Unity::Properties::ConversionRegistry obj);

  /// @brief Method Register, addr 0x696ddfc, size 0xd8, virtual false, abstract: false, final false
  inline void Register(::System::Type* source, ::System::Type* destination, ::System::Delegate* converter);

  /// @brief Method TryGetConverter, addr 0x696df68, size 0x90, virtual false, abstract: false, final false
  inline bool TryGetConverter(::System::Type* source, ::System::Type* destination, ::ByRef<::System::Delegate*> converter);

  /// @brief Method .ctor, addr 0x696dd28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConversionRegistry_ConverterKey, ::System::Delegate*>* storage);

  static inline ::Unity::Properties::ConversionRegistry_ConverterKeyComparer* getStaticF_Comparer();

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry>*
  i___System__Collections__Generic__IEqualityComparer_1___Unity__Properties__ConversionRegistry_();

  static inline void setStaticF_Comparer(::Unity::Properties::ConversionRegistry_ConverterKeyComparer* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConversionRegistry();

  // Ctor Parameters [CppParam { name: "m_Converters", ty: "::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConversionRegistry_ConverterKey,::System::Delegate*>*", modifiers: "",
  // def_value: None }]
  constexpr ConversionRegistry(::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConversionRegistry_ConverterKey, ::System::Delegate*>* m_Converters) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19384 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Converters, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConversionRegistry_ConverterKey, ::System::Delegate*>* m_Converters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::ConversionRegistry, m_Converters) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Properties::ConversionRegistry, 0x8>, "Size mismatch!");

} // namespace Unity::Properties
NEED_NO_BOX(::Unity::Properties::ConversionRegistry_ConverterKeyComparer);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::ConversionRegistry_ConverterKeyComparer*, "Unity.Properties", "ConversionRegistry/ConverterKeyComparer");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::ConversionRegistry, "Unity.Properties", "ConversionRegistry");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::ConversionRegistry_ConverterKey, "Unity.Properties", "ConversionRegistry/ConverterKey");
