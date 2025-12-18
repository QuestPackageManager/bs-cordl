#pragma once
// IWYU pragma private; include "AYellowpaper/SerializedCollections/IKeyable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IKeyable)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace AYellowpaper::SerializedCollections {
class IKeyable;
}
// Write type traits
MARK_REF_PTR_T(::AYellowpaper::SerializedCollections::IKeyable);
// Dependencies
namespace AYellowpaper::SerializedCollections {
// Is value type: false
// CS Name: AYellowpaper.SerializedCollections.IKeyable
class CORDL_TYPE IKeyable {
public:
  // Declarations
  __declspec(property(get = get_Keys)) ::System::Collections::IEnumerable* Keys;

  /// @brief Method AddKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void AddKey(::System::Object* key);

  /// @brief Method GetCount, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetCount();

  /// @brief Method GetKeyAt, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* GetKeyAt(int32_t index);

  /// @brief Method GetOccurences, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<int32_t>* GetOccurences(::System::Object* key);

  /// @brief Method RecalculateOccurences, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RecalculateOccurences();

  /// @brief Method RemoveAt, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RemoveAt(int32_t index);

  /// @brief Method RemoveDuplicates, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RemoveDuplicates();

  /// @brief Method RemoveKey, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void RemoveKey(::System::Object* key);

  /// @brief Method get_Keys, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerable* get_Keys();

  // Ctor Parameters [CppParam { name: "", ty: "IKeyable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IKeyable(IKeyable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23010 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace AYellowpaper::SerializedCollections
NEED_NO_BOX(::AYellowpaper::SerializedCollections::IKeyable);
DEFINE_IL2CPP_ARG_TYPE(::AYellowpaper::SerializedCollections::IKeyable*, "AYellowpaper.SerializedCollections", "IKeyable");
