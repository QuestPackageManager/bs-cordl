#pragma once
// IWYU pragma private; include "Unity/Properties/Internal/SystemVersionPropertyBag.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Properties/zzzz__ContainerPropertyBag_1_def.hpp"
#include "Unity/Properties/zzzz__Property_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SystemVersionPropertyBag)
namespace System {
class Version;
}
namespace Unity::Properties::Internal {
class __SystemVersionPropertyBag__BuildProperty;
}
namespace Unity::Properties::Internal {
class __SystemVersionPropertyBag__MajorProperty;
}
namespace Unity::Properties::Internal {
class __SystemVersionPropertyBag__MinorProperty;
}
namespace Unity::Properties::Internal {
class __SystemVersionPropertyBag__RevisionProperty;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class SystemVersionPropertyBag;
}
namespace Unity::Properties::Internal {
class __SystemVersionPropertyBag__BuildProperty;
}
namespace Unity::Properties::Internal {
class __SystemVersionPropertyBag__MajorProperty;
}
namespace Unity::Properties::Internal {
class __SystemVersionPropertyBag__MinorProperty;
}
namespace Unity::Properties::Internal {
class __SystemVersionPropertyBag__RevisionProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::SystemVersionPropertyBag);
MARK_REF_PTR_T(::Unity::Properties::Internal::__SystemVersionPropertyBag__BuildProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::__SystemVersionPropertyBag__MajorProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::__SystemVersionPropertyBag__MinorProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::__SystemVersionPropertyBag__RevisionProperty);
// Type: ::MajorProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::SystemVersionPropertyBag::MajorProperty*
class CORDL_TYPE __SystemVersionPropertyBag__MajorProperty : public ::Unity::Properties::Property_2<::System::Version*, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__SystemVersionPropertyBag__MajorProperty* New_ctor();

  /// @brief Method .ctor, addr 0x489bd74, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x489bff4, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SystemVersionPropertyBag__MajorProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SystemVersionPropertyBag__MajorProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SystemVersionPropertyBag__MajorProperty(__SystemVersionPropertyBag__MajorProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SystemVersionPropertyBag__MajorProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SystemVersionPropertyBag__MajorProperty(__SystemVersionPropertyBag__MajorProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17474 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__SystemVersionPropertyBag__MajorProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: ::MinorProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::SystemVersionPropertyBag::MinorProperty*
class CORDL_TYPE __SystemVersionPropertyBag__MinorProperty : public ::Unity::Properties::Property_2<::System::Version*, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__SystemVersionPropertyBag__MinorProperty* New_ctor();

  /// @brief Method .ctor, addr 0x489be14, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x489c034, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SystemVersionPropertyBag__MinorProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SystemVersionPropertyBag__MinorProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SystemVersionPropertyBag__MinorProperty(__SystemVersionPropertyBag__MinorProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SystemVersionPropertyBag__MinorProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SystemVersionPropertyBag__MinorProperty(__SystemVersionPropertyBag__MinorProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17475 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__SystemVersionPropertyBag__MinorProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: ::BuildProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::SystemVersionPropertyBag::BuildProperty*
class CORDL_TYPE __SystemVersionPropertyBag__BuildProperty : public ::Unity::Properties::Property_2<::System::Version*, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__SystemVersionPropertyBag__BuildProperty* New_ctor();

  /// @brief Method .ctor, addr 0x489beb4, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x489c074, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SystemVersionPropertyBag__BuildProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SystemVersionPropertyBag__BuildProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SystemVersionPropertyBag__BuildProperty(__SystemVersionPropertyBag__BuildProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SystemVersionPropertyBag__BuildProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SystemVersionPropertyBag__BuildProperty(__SystemVersionPropertyBag__BuildProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17476 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__SystemVersionPropertyBag__BuildProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: ::RevisionProperty
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::SystemVersionPropertyBag::RevisionProperty*
class CORDL_TYPE __SystemVersionPropertyBag__RevisionProperty : public ::Unity::Properties::Property_2<::System::Version*, int32_t> {
public:
  // Declarations
  __declspec(property(get = get_Name)) ::StringW Name;

  static inline ::Unity::Properties::Internal::__SystemVersionPropertyBag__RevisionProperty* New_ctor();

  /// @brief Method .ctor, addr 0x489bf54, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Name, addr 0x489c0b4, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SystemVersionPropertyBag__RevisionProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SystemVersionPropertyBag__RevisionProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SystemVersionPropertyBag__RevisionProperty(__SystemVersionPropertyBag__RevisionProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SystemVersionPropertyBag__RevisionProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SystemVersionPropertyBag__RevisionProperty(__SystemVersionPropertyBag__RevisionProperty const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17477 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::__SystemVersionPropertyBag__RevisionProperty, 0x18>, "Size mismatch!");

} // namespace Unity::Properties::Internal
// Type: Unity.Properties.Internal::SystemVersionPropertyBag
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: ::Unity.Properties.Internal::SystemVersionPropertyBag*
class CORDL_TYPE SystemVersionPropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::System::Version*> {
public:
  // Declarations
  using BuildProperty = ::Unity::Properties::Internal::__SystemVersionPropertyBag__BuildProperty;

  using MajorProperty = ::Unity::Properties::Internal::__SystemVersionPropertyBag__MajorProperty;

  using MinorProperty = ::Unity::Properties::Internal::__SystemVersionPropertyBag__MinorProperty;

  using RevisionProperty = ::Unity::Properties::Internal::__SystemVersionPropertyBag__RevisionProperty;

  static inline ::Unity::Properties::Internal::SystemVersionPropertyBag* New_ctor();

  /// @brief Method .ctor, addr 0x489ac24, size 0x160, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemVersionPropertyBag();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SystemVersionPropertyBag", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SystemVersionPropertyBag(SystemVersionPropertyBag&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SystemVersionPropertyBag", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SystemVersionPropertyBag(SystemVersionPropertyBag const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17478 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::SystemVersionPropertyBag, 0x28>, "Size mismatch!");

} // namespace Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::SystemVersionPropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::SystemVersionPropertyBag*, "Unity.Properties.Internal", "SystemVersionPropertyBag");
NEED_NO_BOX(::Unity::Properties::Internal::__SystemVersionPropertyBag__BuildProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__SystemVersionPropertyBag__BuildProperty*, "Unity.Properties.Internal", "SystemVersionPropertyBag/BuildProperty");
NEED_NO_BOX(::Unity::Properties::Internal::__SystemVersionPropertyBag__MajorProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__SystemVersionPropertyBag__MajorProperty*, "Unity.Properties.Internal", "SystemVersionPropertyBag/MajorProperty");
NEED_NO_BOX(::Unity::Properties::Internal::__SystemVersionPropertyBag__MinorProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__SystemVersionPropertyBag__MinorProperty*, "Unity.Properties.Internal", "SystemVersionPropertyBag/MinorProperty");
NEED_NO_BOX(::Unity::Properties::Internal::__SystemVersionPropertyBag__RevisionProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::__SystemVersionPropertyBag__RevisionProperty*, "Unity.Properties.Internal", "SystemVersionPropertyBag/RevisionProperty");
