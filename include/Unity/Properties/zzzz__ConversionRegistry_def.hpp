#pragma once
// IWYU pragma private; include "Unity/Properties/ConversionRegistry.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
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
template <typename TResult> class Func_1;
}
namespace System {
class Type;
}
namespace Unity::Properties {
struct ConverterKey;
}
// Forward declare root types
namespace Unity::Properties {
struct ConversionRegistry;
}
// Write type traits
MARK_VAL_T(::Unity::Properties::ConversionRegistry);
DEFINE_IL2CPP_CLASS(::Unity::Properties::ConversionRegistry, "Unity.Properties", "ConversionRegistry");
// [IsReadOnly]
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
// Dependencies
namespace Unity::Properties {
// Is value type: true
// CS Name: Unity.Properties.ConversionRegistry
struct CORDL_TYPE ConversionRegistry {
public:
  // Declarations
  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry>*();

  /// @brief Method Apply, addr 0x700e2ec, size 0x14c, virtual false, abstract: false, final false
  inline void Apply(::Unity::Properties::ConversionRegistry registry);

  /// @brief Method Create, addr 0x700e078, size 0xc4, virtual false, abstract: false, final false
  static inline ::Unity::Properties::ConversionRegistry Create();

  /// @brief Method Equals, addr 0x700e580, size 0xc, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Properties::ConversionRegistry x, ::Unity::Properties::ConversionRegistry y);

  /// @brief Method GetConverter, addr 0x700e438, size 0x124, virtual false, abstract: false, final false
  inline ::System::Delegate* GetConverter(::System::Type* source, ::System::Type* destination);

  /// @brief Method GetHashCode, addr 0x700e58c, size 0x20, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::Unity::Properties::ConversionRegistry obj);

  /// @brief Method LazyRegister, addr 0x700e214, size 0xd8, virtual false, abstract: false, final false
  inline void LazyRegister(::System::Type* source, ::System::Type* destination, ::System::Func_1<::System::Delegate*>* converter);

  /// @brief Method Register, addr 0x700e13c, size 0xd8, virtual false, abstract: false, final false
  inline void Register(::System::Type* source, ::System::Type* destination, ::System::Delegate* converter);

  /// @brief Method TryGetConverter, addr 0x700e55c, size 0x24, virtual false, abstract: false, final false
  inline bool TryGetConverter(::System::Type* source, ::System::Type* destination, ::by_ref<::System::Delegate*> converter);

  /// @brief Method .ctor, addr 0x700dfb8, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConverterKey, ::System::Delegate*>* storage);

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConversionRegistry>*
  i___System__Collections__Generic__IEqualityComparer_1___Unity__Properties__ConversionRegistry_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ConversionRegistry();

  // Ctor Parameters [CppParam { name: "m_Converters", ty: "::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConverterKey,::System::Delegate*>*", modifiers: "", def_value: None,
  // comment: None }, CppParam { name: "m_LazyConverters", ty: "::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConverterKey,::System::Func_1<::System::Delegate*>*>*", modifiers: "",
  // def_value: None, comment: None }]
  constexpr ConversionRegistry(::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConverterKey, ::System::Delegate*>* m_Converters,
                               ::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConverterKey, ::System::Func_1<::System::Delegate*>*>* m_LazyConverters) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20776 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Converters, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConverterKey, ::System::Delegate*>* m_Converters;

  /// @brief Field m_LazyConverters, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::Unity::Properties::ConverterKey, ::System::Func_1<::System::Delegate*>*>* m_LazyConverters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Properties::ConversionRegistry, m_Converters) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Properties::ConversionRegistry, m_LazyConverters) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Unity::Properties::ConversionRegistry) == 0x10, "Size mismatch!");

} // namespace Unity::Properties
