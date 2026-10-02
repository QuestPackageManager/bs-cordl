#pragma once
// IWYU pragma private; include "Unity/Properties/ConverterKeyComparer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConverterKeyComparer)
namespace System::Collections::Generic {
template <typename T> class IEqualityComparer_1;
}
namespace Unity::Properties {
struct ConverterKey;
}
// Forward declare root types
namespace Unity::Properties {
class ConverterKeyComparer;
}
// Write type traits
MARK_REF_T(::Unity::Properties::ConverterKeyComparer*);
DEFINE_IL2CPP_CLASS(::Unity::Properties::ConverterKeyComparer*, "Unity.Properties", "ConverterKeyComparer");
// [VisibleToOtherModules(new[] { "UnityEngine.UIElementsModule" })]
// Dependencies System.Object
namespace Unity::Properties {
// Is value type: false
// CS Name: Unity.Properties.ConverterKeyComparer
class CORDL_TYPE ConverterKeyComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field Instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Instance, put = setStaticF_Instance)) ::Unity::Properties::ConverterKeyComparer* Instance;

  /// @brief Convert operator to "::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConverterKey>"
  constexpr operator ::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConverterKey>*() noexcept;

  /// @brief Method Equals, addr 0x700de3c, size 0x68, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Properties::ConverterKey x, ::Unity::Properties::ConverterKey y);

  /// @brief Method GetHashCode, addr 0x700dea4, size 0xbc, virtual true, abstract: false, final true
  inline int32_t GetHashCode(::Unity::Properties::ConverterKey obj);

  static inline ::Unity::Properties::ConverterKeyComparer* New_ctor();

  /// @brief Method .ctor, addr 0x700df60, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Properties::ConverterKeyComparer* getStaticF_Instance();

  /// @brief Convert to "::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConverterKey>"
  constexpr ::System::Collections::Generic::IEqualityComparer_1<::Unity::Properties::ConverterKey>* i___System__Collections__Generic__IEqualityComparer_1___Unity__Properties__ConverterKey_() noexcept;

  static inline void setStaticF_Instance(::Unity::Properties::ConverterKeyComparer* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConverterKeyComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConverterKeyComparer", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConverterKeyComparer(ConverterKeyComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConverterKeyComparer", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConverterKeyComparer(ConverterKeyComparer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20775 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Properties::ConverterKeyComparer) == 0x10, "Size mismatch!");

} // namespace Unity::Properties
