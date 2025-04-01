#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Utilities/NameAndParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NamedValue_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NameAndParameters)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::InputSystem::Utilities {
class NameAndParameters___c;
}
namespace UnityEngine::InputSystem::Utilities {
struct NamedValue;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class NameAndParameters___c;
}
namespace UnityEngine::InputSystem::Utilities {
struct NameAndParameters;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::NameAndParameters___c);
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::NameAndParameters);
// Dependencies System.Object
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// CS Name: UnityEngine.InputSystem.Utilities.NameAndParameters/<>c
class CORDL_TYPE NameAndParameters___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::InputSystem::Utilities::NameAndParameters___c* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0)) ::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>* __9__8_0;

  static inline ::UnityEngine::InputSystem::Utilities::NameAndParameters___c* New_ctor();

  /// @brief Method <ToString>b__8_0, addr 0x4567ff4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW _ToString_b__8_0(::UnityEngine::InputSystem::Utilities::NamedValue x);

  /// @brief Method .ctor, addr 0x4567fec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::InputSystem::Utilities::NameAndParameters___c* getStaticF___9();

  static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>* getStaticF___9__8_0();

  static inline void setStaticF___9(::UnityEngine::InputSystem::Utilities::NameAndParameters___c* value);

  static inline void setStaticF___9__8_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NameAndParameters___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NameAndParameters___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NameAndParameters___c(NameAndParameters___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NameAndParameters___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NameAndParameters___c(NameAndParameters___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7091 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::NameAndParameters___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
// Dependencies UnityEngine.InputSystem.Utilities.NamedValue, UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<TValue>
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// CS Name: UnityEngine.InputSystem.Utilities.NameAndParameters
struct CORDL_TYPE NameAndParameters {
public:
  // Declarations
  using __c = ::UnityEngine::InputSystem::Utilities::NameAndParameters___c;

  __declspec(property(get = get_name, put = set_name)) ::StringW name;

  __declspec(property(get = get_parameters, put = set_parameters)) ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> parameters;

  /// @brief Method Parse, addr 0x4567d74, size 0x88, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::NameAndParameters Parse(::StringW text);

  /// @brief Method ParseMultiple, addr 0x45676ec, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>* ParseMultiple(::StringW text);

  /// @brief Method ParseMultiple, addr 0x4567798, size 0x1cc, virtual false, abstract: false, final false
  static inline bool ParseMultiple(::StringW text, ::ByRef<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*> list);

  /// @brief Method ParseName, addr 0x4567cfc, size 0x78, virtual false, abstract: false, final false
  static inline ::StringW ParseName(::StringW text);

  /// @brief Method ParseNameAndParameters, addr 0x4567964, size 0x398, virtual false, abstract: false, final false
  static inline ::UnityEngine::InputSystem::Utilities::NameAndParameters ParseNameAndParameters(::StringW text, ::ByRef<int32_t> index, bool nameOnly);

  /// @brief Method ToString, addr 0x456750c, size 0x1e0, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method get_name, addr 0x45674e8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_parameters, addr 0x45674f8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> get_parameters();

  /// @brief Method set_name, addr 0x45674f0, size 0x8, virtual false, abstract: false, final false
  inline void set_name(::StringW value);

  /// @brief Method set_parameters, addr 0x4567504, size 0x8, virtual false, abstract: false, final false
  inline void set_parameters(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr NameAndParameters();

  // Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_parameters_k__BackingField", ty:
  // "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>", modifiers: "", def_value: None }]
  constexpr NameAndParameters(::StringW _name_k__BackingField,
                              ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> _parameters_k__BackingField) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7092 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field <name>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::StringW _name_k__BackingField;

  /// @brief Field <parameters>k__BackingField, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> _parameters_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::Utilities::NameAndParameters, _name_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Utilities::NameAndParameters, _parameters_k__BackingField) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::NameAndParameters, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::NameAndParameters___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::NameAndParameters___c*, "UnityEngine.InputSystem.Utilities", "NameAndParameters/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::NameAndParameters, "UnityEngine.InputSystem.Utilities", "NameAndParameters");
