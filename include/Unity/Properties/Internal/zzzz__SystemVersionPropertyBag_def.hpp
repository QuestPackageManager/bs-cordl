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
class SystemVersionPropertyBag_BuildProperty;
}
namespace Unity::Properties::Internal {
class SystemVersionPropertyBag_MajorProperty;
}
namespace Unity::Properties::Internal {
class SystemVersionPropertyBag_MinorProperty;
}
namespace Unity::Properties::Internal {
class SystemVersionPropertyBag_RevisionProperty;
}
// Forward declare root types
namespace Unity::Properties::Internal {
class SystemVersionPropertyBag;
}
namespace Unity::Properties::Internal {
class SystemVersionPropertyBag_BuildProperty;
}
namespace Unity::Properties::Internal {
class SystemVersionPropertyBag_MajorProperty;
}
namespace Unity::Properties::Internal {
class SystemVersionPropertyBag_MinorProperty;
}
namespace Unity::Properties::Internal {
class SystemVersionPropertyBag_RevisionProperty;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::Internal::SystemVersionPropertyBag);
MARK_REF_PTR_T(::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty);
MARK_REF_PTR_T(::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty);
// Dependencies Unity.Properties.Property`2<TContainer, TValue>
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.SystemVersionPropertyBag/MajorProperty
class CORDL_TYPE SystemVersionPropertyBag_MajorProperty : public ::Unity::Properties::Property_2<::System::Version*,int32_t> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Method GetValue, addr 0x6a5d7a8, size 0x18, virtual true, abstract: false, final false
inline int32_t GetValue(::ByRef<::System::Version*>  container) ;

static inline ::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty* New_ctor() ;

/// @brief Method SetValue, addr 0x6a5d7c0, size 0x4, virtual true, abstract: false, final false
inline void SetValue(::ByRef<::System::Version*>  container, int32_t  value) ;

/// @brief Method .ctor, addr 0x6a5d52c, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0x6a5d7a0, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0x6a5d75c, size 0x44, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemVersionPropertyBag_MajorProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemVersionPropertyBag_MajorProperty", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemVersionPropertyBag_MajorProperty(SystemVersionPropertyBag_MajorProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemVersionPropertyBag_MajorProperty", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemVersionPropertyBag_MajorProperty(SystemVersionPropertyBag_MajorProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19488};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty, 0x18>, "Size mismatch!");

} // namespace end def Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.SystemVersionPropertyBag/MinorProperty
class CORDL_TYPE SystemVersionPropertyBag_MinorProperty : public ::Unity::Properties::Property_2<::System::Version*,int32_t> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Method GetValue, addr 0x6a5d810, size 0x18, virtual true, abstract: false, final false
inline int32_t GetValue(::ByRef<::System::Version*>  container) ;

static inline ::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty* New_ctor() ;

/// @brief Method SetValue, addr 0x6a5d828, size 0x4, virtual true, abstract: false, final false
inline void SetValue(::ByRef<::System::Version*>  container, int32_t  value) ;

/// @brief Method .ctor, addr 0x6a5d5b8, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0x6a5d808, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0x6a5d7c4, size 0x44, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemVersionPropertyBag_MinorProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemVersionPropertyBag_MinorProperty", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemVersionPropertyBag_MinorProperty(SystemVersionPropertyBag_MinorProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemVersionPropertyBag_MinorProperty", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemVersionPropertyBag_MinorProperty(SystemVersionPropertyBag_MinorProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19489};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty, 0x18>, "Size mismatch!");

} // namespace end def Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.SystemVersionPropertyBag/BuildProperty
class CORDL_TYPE SystemVersionPropertyBag_BuildProperty : public ::Unity::Properties::Property_2<::System::Version*,int32_t> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Method GetValue, addr 0x6a5d878, size 0x18, virtual true, abstract: false, final false
inline int32_t GetValue(::ByRef<::System::Version*>  container) ;

static inline ::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty* New_ctor() ;

/// @brief Method SetValue, addr 0x6a5d890, size 0x4, virtual true, abstract: false, final false
inline void SetValue(::ByRef<::System::Version*>  container, int32_t  value) ;

/// @brief Method .ctor, addr 0x6a5d644, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0x6a5d870, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0x6a5d82c, size 0x44, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemVersionPropertyBag_BuildProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemVersionPropertyBag_BuildProperty", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemVersionPropertyBag_BuildProperty(SystemVersionPropertyBag_BuildProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemVersionPropertyBag_BuildProperty", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemVersionPropertyBag_BuildProperty(SystemVersionPropertyBag_BuildProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19490};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty, 0x18>, "Size mismatch!");

} // namespace end def Unity::Properties::Internal
// Dependencies Unity.Properties.Property`2<TContainer, TValue>
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.SystemVersionPropertyBag/RevisionProperty
class CORDL_TYPE SystemVersionPropertyBag_RevisionProperty : public ::Unity::Properties::Property_2<::System::Version*,int32_t> {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

/// @brief Method GetValue, addr 0x6a5d8e0, size 0x18, virtual true, abstract: false, final false
inline int32_t GetValue(::ByRef<::System::Version*>  container) ;

static inline ::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty* New_ctor() ;

/// @brief Method SetValue, addr 0x6a5d8f8, size 0x4, virtual true, abstract: false, final false
inline void SetValue(::ByRef<::System::Version*>  container, int32_t  value) ;

/// @brief Method .ctor, addr 0x6a5d6d0, size 0x8c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsReadOnly, addr 0x6a5d8d8, size 0x8, virtual true, abstract: false, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0x6a5d894, size 0x44, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemVersionPropertyBag_RevisionProperty() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemVersionPropertyBag_RevisionProperty", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemVersionPropertyBag_RevisionProperty(SystemVersionPropertyBag_RevisionProperty && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemVersionPropertyBag_RevisionProperty", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemVersionPropertyBag_RevisionProperty(SystemVersionPropertyBag_RevisionProperty const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19491};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty, 0x18>, "Size mismatch!");

} // namespace end def Unity::Properties::Internal
// Dependencies Unity.Properties.ContainerPropertyBag`1<TContainer>
namespace Unity::Properties::Internal {
// Is value type: false
// CS Name: Unity.Properties.Internal.SystemVersionPropertyBag
class CORDL_TYPE SystemVersionPropertyBag : public ::Unity::Properties::ContainerPropertyBag_1<::System::Version*> {
public:
// Declarations
using BuildProperty = ::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty;

using MajorProperty = ::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty;

using MinorProperty = ::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty;

using RevisionProperty = ::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty;

static inline ::Unity::Properties::Internal::SystemVersionPropertyBag* New_ctor() ;

/// @brief Method .ctor, addr 0x6a5c1d0, size 0x16c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SystemVersionPropertyBag() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SystemVersionPropertyBag", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemVersionPropertyBag(SystemVersionPropertyBag && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemVersionPropertyBag", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemVersionPropertyBag(SystemVersionPropertyBag const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19492};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Properties::Internal::SystemVersionPropertyBag, 0x28>, "Size mismatch!");

} // namespace end def Unity::Properties::Internal
NEED_NO_BOX(::Unity::Properties::Internal::SystemVersionPropertyBag);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::SystemVersionPropertyBag*, "Unity.Properties.Internal", "SystemVersionPropertyBag");
NEED_NO_BOX(::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::SystemVersionPropertyBag_BuildProperty*, "Unity.Properties.Internal", "SystemVersionPropertyBag/BuildProperty");
NEED_NO_BOX(::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::SystemVersionPropertyBag_MajorProperty*, "Unity.Properties.Internal", "SystemVersionPropertyBag/MajorProperty");
NEED_NO_BOX(::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::SystemVersionPropertyBag_MinorProperty*, "Unity.Properties.Internal", "SystemVersionPropertyBag/MinorProperty");
NEED_NO_BOX(::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::SystemVersionPropertyBag_RevisionProperty*, "Unity.Properties.Internal", "SystemVersionPropertyBag/RevisionProperty");
